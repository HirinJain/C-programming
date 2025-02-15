#include<stdio.h>
int main()
{
   int a;
   printf("Enter the number");
   scanf("%d",&a);
   for(int b = 0;b<=0;b++)
   {
    b = a%10;
    a= (a-b)/10;
    printf("First digit is %d and the last digit is %d\n",a,b);
   }

    return 0;
}