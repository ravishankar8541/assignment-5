//Write a program to print the first N odd natural numbers in reverse order.
#include"stdio.h"
int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        if(i%2){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}