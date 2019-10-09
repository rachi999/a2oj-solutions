#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int z, e, r, o, n;
	z=0;
	e=0;
	r=0;
	o=0;
	n=0;
	string s;
	cin>>s;
	for(int i=0;i<num;i++){
		if(s[i]=='z'){
			z++;
		}
		else if(s[i]=='r'){
			r++;
		} 
		else if(s[i]=='n'){
			n++;
		}
		else if(s[i]=='e'){
			e++;
		}
		else if(s[i]=='o'){
			o++;
		}
		if(z>=1 && e>=1 && r>=1 && o>=1){
			cout<<0<<" ";
			z--;
			e--;
			r--;
			o--;
		}
		if(o>=1 && n>=1 && e>=1){
			cout<<1<<" ";
			o--;
			n--;
			e--;
		}
	}
	return 0;
}