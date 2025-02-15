#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    for (int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("Enter the number1 : ");
            scanf("%d",&a[i][j]);
            
        }
    }
    for (int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
            // printf(" %d ",a[j][i]);
            
        }
        printf("\n");
    }
    
    printf("\n");
    printf("The transpose is : \n");
    for (int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            
             printf(" %d ",a[j][i]);
            
        }printf("\n");

    }
}