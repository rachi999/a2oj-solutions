
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int h[n], a[n];
	for(int i=0;i<n;i++){
		cin>>h[i];
		cin>>a[i];
	}
	int swap = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(h[i]==a[j]){
				swap++;
			}
			if(a[i]==h[j]){
				swap++;
			}
		}
	}
	cout<<swap<<endl;
	return 0;
}