#include<bits/stdc++.h>
#include<strings.h>
using namespace std;
int main(){
	string str1, str2;
	int l1, l2, i, diff;
	cin>>str1;
	cin>>str2;
	l1=str1.length();
	l2=str2.length();
	for(i=0;i<l1;i++){
		if(str1[i]>=65 && str1[i]<=90){
			str1[i] = str1[i]+32;
		}
	}
	for(i=0;i<l2;i++){
		if(str2[i]>=65 && str2[i]<=90){
			str2[i] = str2[i]+32;
		}
	}
	if (str1<str2)
	{
		cout<<"-1";
	}
	else if(str1>str2){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}