#include<stdio.h>
int main()
{
    int a;
    int b=1;
    printf("Enter a no: \n");
    scanf("%d", &a);
    for(int  i=1; i<=a; i++)
    {
       b=b*i; 
    }
    printf("Factorial is: %d\n", b);
    return 0;
}