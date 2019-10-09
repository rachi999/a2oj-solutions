#include<bits/stdc++.h>
using namespace std;

int coinSum(int coin[], int a, int b){
	int sum = 0;
	for(int j=a; j<=b; j++){
		sum = sum + coin[j];
	}
	return sum;
}


int main(){
	int n;
	cin >> n;
	int coin[n];
	for(int i=0; i<n; i++){
		cin >> coin[i];
	}
	sort(coin, coin+n);
	for(int i=n-1; i>=0; i--){
		int boy1 = coinSum(coin, i, n-1);
		int boy2 = coinSum(coin, 0, i-1);
		if(boy1 > boy2){
			cout << (n-i);
			i=-1;
		}
	}
	return 0;
}