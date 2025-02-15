#include<stdio.h>
int main()
{
    int a;
    int sum = 0;
    a = 1;
    while (a<=100)
    { 
       if(a%2==0)
       {
       sum = sum +a;
       }
       a++;
    }
    printf("%d",sum);
    return 0;
}