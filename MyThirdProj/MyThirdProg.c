#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>


int main()
{
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0; // UINT_MIN이 안되는 이유? unsigned의 최솟값은 무조건 0이니께
	int i_max = INT_MAX;
	int i_min = INT_MIN;

	printf("max of unsigned int = %u\n", u_max);
	printf("min of unsinged int = %u\n", u_min);
	printf("max of int = %u\n", i_max);
	printf("mint of int = %u\n", i_min);


	return 0;
}