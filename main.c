#include "add.h"
#include <stdio.h>
int main(){
	int x,y,sum;
	printf("두 정수를 입력하시오: ");
	scanf("%d %d",&x, &y);
	sum=add(x,y);
	printf("두 정수의 합: %d\n", sum);
	return 0;
}
