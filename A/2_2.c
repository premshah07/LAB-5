#include<stdio.h>
void main(){
	int a,b;
	printf("enter the val:");
	scanf("%d",&a);
	printf("enter the val:");
	scanf("%d",&b);
	int temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
	
}
