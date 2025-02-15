#include <stdio.h>
int main()
{
  
    int a[100];
    int c =0,d=0;
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter The Number : ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        if (a[i]%2 == 0)
        {
            // printf("%d\n", a[i]);
            c+=1;
        }
        else
        {
            d+=1;
        }
        
    }
    printf("Number of even element %d\n", c);
    printf("Number of odd element %d\n", d);
    return 0;
}