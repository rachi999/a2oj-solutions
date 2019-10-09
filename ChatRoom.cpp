#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
	string s;
	cin >> s;
    int pos = 0;
    while(pos < s.length() && s[pos] != 'h')
        pos += 1;
    pos += 1;
    while(pos < s.length() && s[pos] != 'e')
        pos += 1;
    pos += 1;
    while(pos < s.length() && s[pos] != 'l')
        pos += 1;
    pos += 1;
    while(pos < s.length() && s[pos] != 'l')
        pos += 1;
    pos += 1;
    while(pos < s.length() && s[pos] != 'o')
        pos += 1;
    pos += 1;
    
    if(pos <= s.length())
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
