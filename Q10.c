//Write a program to print a table of N.
#include"stdio.h"
int main()
{
    int i,n;
    printf("Enter a numbe :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
    printf("%d X %d = %d",n,i,n*i);
    printf("\n");
    }
    printf("\n");
    return 0;
}