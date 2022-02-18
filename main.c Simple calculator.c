/*
simple calculator
By Joshua
on Feb 2022
MIT License
C89 compiler
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Variable declaration
    char name[100];
    int n1,n2,sum,diff,product;
    float quot;
    printf("simple calculator!\n");

    printf("enter your name:\n");
    gets(name);
    printf("enter your integers:");
    scanf("%d%d",&n1,n2);
    // computations

    sum=n1+n2;
    diff=n1 - n2;
    product=n1*n2;
    quot=(float)n1/n2;

    //outputs
    printf("hey %s,here is your results:\n,name");
    printf("%6d +%6d=%6d\n",n1,n2,sum);
    printf("%6d +%6d=%6d\n",n1,n2,diff);
    printf("%6d +%6d=%6d\n",n1,n2,product);
    printf("%6d +%6d=%6d\n",n1,n2,quot);
    return 0;
}



