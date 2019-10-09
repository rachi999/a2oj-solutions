#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m;
	int chance;
	cin>>n>>m;
	if(n<m){
		chance = n;
	}
	else{
		chance = m;
	}
	if(chance%2==0){
		cout<<"Malvika";
	}
	else{
		cout<<"Akshat";
	}
	return 0;
}