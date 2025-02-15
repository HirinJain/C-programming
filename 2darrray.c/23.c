#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    for (int i = 0;i<2;i++)
    {
        for(int j = 0;j<2;j++)
        {
            printf("Enter the number1 : ");
            scanf("%d",&a[i][j]);
            printf("Enter the number2 : ");
            scanf("%d",&b[i][j]);
        }
    }
    for (int i = 0;i<2;i++)
    {
        for(int j = 0;j<2;j++)
        {
            printf(" %d ",a[i][j]+b[i][j]);
            
        }printf("\n");

    }
}