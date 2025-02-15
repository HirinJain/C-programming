#include <stdio.h>
int main()
{
  
    int a[100];
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter The Number : ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        if (a[i] < 0)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}