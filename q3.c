#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

double power(long n)
{
    return  ( pow(n,2)/pow(n,3));

}

void main()
{
    printf("Enter the n\n");
    long n;
    scanf("%ld",&n);
    int count=0;
    double sum =0;
    long i;
    for( i=1;;i+=2)
    {
        if(count==n)
            break;
        sum += power(i);
        count++;
    }

    printf("%lf\n", sum);


}
	
	
	

