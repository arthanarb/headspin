#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool Armstrong(long n)
{
    int x;
    long sum=0,p=n;
    while(n>0)
    {
        x=n%10;
        sum = sum + x*x*x;        
        n=n/10;
    }

    if(sum==p)
    return true;
    return false;
}

void main()
{
    printf("Enter the n\n");
    long n;
    scanf("%ld",&n);
    long i;
    
    for( i=0;i<n;i++)
    {
        if(Armstrong(i))
        printf("%ld\n", i);
    }

}
