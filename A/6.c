#include<stdio.h>
void main(){
	char b;
	printf("enter the character:");
	scanf("%c",&b);
	if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U'){
		printf("%c is vowel",b);
	}
	else{
		printf("%c is consonant",b);
	}
}
