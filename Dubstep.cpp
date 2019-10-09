#include<bits/stdc++.h>
using namespace std;
int main(){
	string mainstr;
	string newstr="";
	cin>>mainstr;
	int j=0;
	int arr[200];
	for(int i=0;i<mainstr.length()-3;i++){
		if(mainstr[i]=='W' && mainstr[i+1]=='U' && mainstr[i+2]=='B'){
			mainstr[i] = ' ';
			mainstr[i+1] ='';
			mainstr[i+2] = '';
			arr[j++] = i;
			i=i+2;
		}
	}
	for(int i=0;i<mainstr.length();i++){
		if(mainstr[i]==' ' && mainstr[i+1]==' '){
			mainstr[i+1] = '\0';
		}
	}
	mainstr[0] = '\0';
	cout<<mainstr;
	return 0;
}