#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter the val:");
	scanf("%d",&a);
	printf("enter the val:");
	scanf("%d",&b);
	printf("enter the val:");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d is the largest",a);
	
		}
		else{
			printf("%d is the largest",c);
		}
	}
	else{
		if(b>c){
				printf("%d is largest",b);
		}
		else{
				printf("%d is largest",c);
		}
	}
}
