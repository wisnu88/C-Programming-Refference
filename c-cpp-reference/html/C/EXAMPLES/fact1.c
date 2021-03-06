/*
*************************************************************************
*
*	Purpose: generate the factorial of a number by iteration.
*	Author:  M. J. Leslie
*	Date:    09-Apr-94
*
**************************************************************************
*/

#include <stdio.h>

int factorial(int num);

main()
{
	int num;
	puts  ("This program will return the factorial of a number.");
	printf("Please enter the number ==> " );
	scanf("%d", &num);

	printf(" %d! is %d\n",num, factorial(num) );
}

int factorial(int num)
{
	int count, ans=1;
	for (count=1 ; count <= num; count++ ) ans *= count;
	return ans;
}
