//Write a program to print squares of the first N natural numbers
#include"stdio.h"
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Square of %d is %d",i,i*i);
        printf("\n");
    }
    printf("\n");
    return 0;
}