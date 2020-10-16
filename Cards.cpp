#include<bits/stdc++.h>
//program where nb = number and st= string
using namespace std;
int main(){
	int nb;
	cin>>nb;
	int z, e, r, o, n;
	z=0;
	e=0;
	r=0;
	o=0;
	n=0;
	string st;
	cin>>st;
	for(int i=0;i<nb;i++){
		if(st[i]=='z'){
			z++;
		}
		else if(st[i]=='r'){
			r++;
		} 
		else if(st[i]=='n'){
			n++;
		}
		else if(st[i]=='e'){
			e++;
		}
		else if(st[i]=='o'){
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
