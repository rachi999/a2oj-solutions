#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, l;
	cin >> n;
	while(n--){
		// char word[100];
		string word;
		cin >> word;
		l = word.length();
		if(l>10){
			word = word[0] + to_string(l-2) + word[l-1];
		}
		cout << word;
	}
	return 0;
}