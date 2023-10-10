#include<stdio.h>
void main(){
	int a;
	printf("enter the val:");
	scanf("%d",&a);
    ((a|1)>a)?printf("a is even"):printf("a is odd");
}
