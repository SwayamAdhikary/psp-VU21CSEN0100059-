#include <stdio.h>
int main()
{
	int A, B, C;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &A, &B, &C);

	if (A <= B && A <= C)
		printf("%d is the smallest number.", A);

	else if (B <= A && B <= C)
		printf("%d is the smallest number.", B);

	else
		printf("%d is the smallest number.", C);

	return 0;
}


