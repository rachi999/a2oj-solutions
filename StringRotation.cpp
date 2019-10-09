#include<bits/stdc++.h>
int main(){
	string str;
	cin>>str;
	int inp;
	cin>>inp;
	int mov;
	char dir;
	int ptr=0;
	string str1='';
	while(inp--){
		cin>>mov;
		cin>>dir;
		if(dir == 'L'){
			leftrotate(str, mov);
			str1 += str[0];
		}
		else if(dir == 'R'){
			rightrotate(str, mov);
			str1 += str[0];
		}
	}
	return 0;

}