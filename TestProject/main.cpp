#include <stdio.h>
#include "util.h"

int main()
{
	int number;
	scanf("%d", &number);
	int result = CalculateOddSum(number);
	printf("result %d\n", result);

	printf("new\n");
	return 0;
}