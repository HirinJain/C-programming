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
        if (a[i] > a[i + 1])
        {
            printf("Maximum number is %d\n", a[i]);
        }
        
    }
    return 0;
}