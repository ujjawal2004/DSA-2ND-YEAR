#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d %f %f",&a,&b,&c,&d);
    int sum = a+b;
    int diff = a-b;
    float fsum = c+d;
    float fdiff = c-d;
    printf("%d %d\n%0.1f %0.1f",sum,diff,fsum,fdiff);
	
    return 0;
}

https://www.hackerrank.com/challenges/sum-numbers-c/submissions/code/292513665
