#include <stdio.h>
int main()
{
  
    int a[100];
    int c =0;
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter The Number : ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        if (a[i] < 0)
        {
            // printf("%d\n", a[i]);
            c+=1;
        }
        
    }
    printf("%d\n", c);
    return 0;
}