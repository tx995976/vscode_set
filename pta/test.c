#include<stdio.h>
#include<string.h>
#define MAXLINE 100
void encrypt(char *);
int main(){
	char line[MAXLINE];
	int a,b;
	printf("Input the string:");
	gets(line);
	encrypt(line);
	swap(a,b);
	printf("%s%s\n","After being encrypted:",line);
	
	return 0;
}

void encrypt(char *s){
	for(;*s!='\0';s++)
	if(*s=='z')
	*s='a';
	else   *s=*s+1;
}