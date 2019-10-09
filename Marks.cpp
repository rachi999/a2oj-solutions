#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, success, i, j, f, max, subject;
	cin >> n;
	cin>>m;
	int student[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>student[i][j];
		}
	}
	max=0;
	success=0;
	for(i=0;i<n;i++){
		if(max!=0){
			f=0;
			for(i=0;i<n;i++){
				if(student[i][subject]>max){
					f=1;
				}
			}
			if(f==0){
				success++;
			}
		}
		max = 0;
		for(j=0;j<m;j++){
			if(student[i][j]> max){
				max = student[i][j];
				subject = j;
			}
		}
	}
	cout<< success;
	return 0;

}