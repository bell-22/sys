#include <stdio.h>
int main() {
	int a,b;
	printf("첫 번째 수를 입력하시오: ");
	scanf("%d",&a);
	printf("두 번째 수를 입력하시오: ");
	scanf("%d",&b);
	int sum;
	sum=a+b;
	printf("두 수의 합: %d\n", sum);
	return 0;
}
