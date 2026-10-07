//1
#include <stdio.h>

int main(){
	int a, b, temp;
	printf("1Enter the numbers");
	scanf("%d%d", &a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("%d%d\n",a,b);

//2
	int g  = 0;
	printf("2Enter the number");
	scanf("%d", &g);
	if (g % 2 == 0){
		printf("Even");
	}	else{
			printf("Odd");
		}
//3

	int n = 0;
	printf("3Enter the numbers");
        scanf("%d", &n);

        if (n % 3 == 0 && n % 5 == 0) {
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}
