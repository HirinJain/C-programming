#include <stdio.h>
int main()
{
  
    int a[100];
    int count[100]={};
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter The Number : ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        for(int j = 0 ; j<=i+1;j++)
        {
        if (a[i] == a[j])
        {
           count[i]++;
        }
        }
        
    }
    for (int i = 0; i <= 5; i++)
    {
        if (count[i]==1)
        {
            printf("The Number %d is not repeated\n", a[i]);
        }
    }
    return 0;
}
