#include<stdio.h>
void main(){
	int a,b;
	printf("enter the val:");
	scanf("%d",&a);
	printf("enter the val:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}
