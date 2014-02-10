/* avg.c: Averages 2 integers */
/* Compile with:
    make avg CFLAGS="-g -Wall -std=gnu11 -O3"
   or
    make avg CFLAGS="-g -Wall -std=gnu99 -O3"
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    float sum;
    
    puts("\nEnter the 1st number:");
    scanf("%d",&num1);
    puts("Enter the 2nd number:");
    scanf("%d",&num2);    
    sum = num1 + num2;
    printf("The average is %f\n", sum/2);
    //~ while( getchar() != '\n' ) { /*do nothing*/} ;
    getchar() ; /* wait */
    return 0;
}

