#include<stdio.h>
int main() {
	int num1;
	int num2;
	printf("n1:");
	scanf("%d",&num1);
	printf("n2");
	scanf("%d",&num2);
	if (num1>num2){
		printf("num1 is greater than num2");
	}
	else{
		printf("num2 is greater than num1");
	}
	return 0;
}

