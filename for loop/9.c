#include<stdio.h>
int main()
{
    int a;
    int mul;
    printf("Enter the number : ");
    scanf(" %d",&mul);
    for (a = 1 ; a<=10;a++)
    {
       printf("%d*%d=%d\n",a,mul,a*mul);
       
    }
   
    return 0;
}