#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, t;
	cin>>n;
	int arr[n], a[n];
	int index;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		a[i] = arr[i];
	}
	sort(arr, arr+n, greater<int>());
	int low = arr[n-1];
	for(int i=n; i>=0; i--){
		if(a[i] == low){
			index = i;
			break;
		}
	}
	int ctr1=0;
	for(int i=index; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				ctr1++;
				j=n;
			}
		}
	}
	//cout<<ctr1<<endl;
	int ctr2=0;
	int high = arr[0];
	for(int i=0; i<n; i++){
		if(a[i] == high){
			index = i;
			break;
		}
	}
	for(int i=index; i>=0; i--){
		for(int j=i-1; j>=0; j--){
			if(a[i]>a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				ctr2++;
				j=0;
			}
		}
	}
	//cout<<ctr2<<endl;
	int ctr = ctr1+ctr2;
	cout<<ctr<<endl;
	return 0;

}