#include<stdio.h>
#include<string.h>
int main(){
	int i, l;
	char word[100];
	scanf("%s",word);
	l=strlen(word);
	for(i=0;i<l;i++){
		if(word[i]>=65 && word[i]<=90){
			word[i] = word[i]+32;
		}
		if(!(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='y')){
			printf(".%c",word[i]);
		}
	}
	return 0;
}