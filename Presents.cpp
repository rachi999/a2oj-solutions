#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int narr[n];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		narr[arr[i]]=i;
	}
	for(int i=1;i<=n;i++){
		cout<<narr[i]<<" ";
	}
	return 0;
}