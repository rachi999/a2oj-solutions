#include<stdio.h>
#include<string.h>
int main(){
	int n, l;
	char word[100], suffix;
	scanf("%d", &n);
	while(n--){
		scanf("%s",word);
		l = strlen(word);
		suffix = word[l-1];
		if(l > 10){
			printf("%c%d%c\n",word[0],l-2,suffix);
		}
		else{
			printf("%s\n", word);
		}
	}
	return 0;
}