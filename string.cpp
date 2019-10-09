#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	int t; cin >> t;
	string temp = "";
	char r;
	int n;
	while(t--){
		cin >> r >> n;
		if(r == 'L'){
			rotate(s.begin(),s.begin()+n,s.end());
			temp += s[0];
		}
		else{
			rotate(s.begin(),s.begin()+s.size()-n,s.end());
			temp += s[0];
		}
	}

	bool res = false;
	int j=0,i=0;
	int cond = temp.size();
	sort(s.begin(),s.end());
	sort(temp.begin(),temp.end());

	if(s.length() != temp.length()){
		res = false;
	}
	if(s==temp){
		res = true;
	}
	if(res)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}