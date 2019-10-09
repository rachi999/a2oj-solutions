#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, f=0;
	int c, c1=0;
	cin>>n;
	if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
		cout<<"YES"<<endl;
	}
	else{
		while(n>0){
			if(n%10==4||n%10==7){
				f=1;
				n=n/10;
			}
			else{
				f=0;
				break;
			}
		}
		if(f==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}