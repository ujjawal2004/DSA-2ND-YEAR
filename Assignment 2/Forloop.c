#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char num_name[11][6]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    for(int i=a; i<=b ;i++)
    {
        int num_i = i<=9 ? i-1 : 9 + i % 2;
        printf("%s \n",num_name[num_i]);
    }

    return 0;
}

https://www.hackerrank.com/challenges/for-loop-in-c/submissions/code/292516270
