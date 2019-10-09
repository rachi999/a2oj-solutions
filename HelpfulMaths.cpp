#include<bits/stdc++.h>
#include<strings.h>
using namespace std;
int main(){
	string str;
	int l, i, k;
	int arr[60];
	cin >> str;
	l=str.length();
	k=0;
	for(i=0;i<l;i++){
		if(str[i]>=48 && str[i]<=90){
			arr[k]=str[i]-48;
			k++;
		}
	}
	sort(arr, arr+k);
	cout<<arr[0];
	for(i=1;i<k;i++){
		cout<<"+"<<arr[i];
	}
	return 0;
}