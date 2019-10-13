#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
int a = num%10;
int b = num/10;
int ans = a*10+b;
cout<<ans<<endl;
return 0;
}