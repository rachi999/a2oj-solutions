#include<stdio.h>
#include<string.h>
int main(){
	int i, len, x;
	char word[100];
	scanf("%s",word);
	len=strlen(word);
	x=0;
	for(i=0;i<len;i++){
		if(word[i]>=65 && word[i]<=90){
			word[i] = word[i]+32;
			x=x+1;
		}
		if(!(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='y')){
			printf(".%c",word[i]);
		}
	}
	return 0;
}