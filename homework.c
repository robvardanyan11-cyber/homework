#include <stdio.h>

int main(){
	int a = 0;
	printf("Enter the number");
	scanf("%d", &a);
	if (a % 2 == 0){
		printf("Even");
	}	else{
			printf("Odd");
		}
		return 0;
	}
