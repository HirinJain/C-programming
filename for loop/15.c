#include<stdio.h>
int main()
{
   int a,b,d,count=1,f,e;
   printf("Enter the number");
   scanf("%d",&a);
   b = a%10;
    d = a;
    while(a>10)
    {
        a= a/10;
        count = count*10;
    }
     d = d-b;
     d = d/10;
     e = d%10;
     f = (d%100);
    printf("%d",f);
    return 0;
}

    