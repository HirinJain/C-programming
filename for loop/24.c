#include<stdio.h>

int main()
{
    int n1,n2,a=1;
    printf("Enter number1: ");
    scanf("%d",&n1);
    printf("Enter number1: ");
    scanf("%d",&n2);
    for (int i= 0;i<=n1 && i<=n2;i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            a =i;
        }
      
    }
    printf("Hcf is %d:",a);
    return 0;

}