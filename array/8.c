#include <stdio.h>
int main()
{

    int a[100], c[100];
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter The Number : ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i <= 5; i++)
    { 
        if(c[i]%)
        printf("%d\n", c[i]);
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int a[5], c[5]; // Changed array size to match loop condition

    for (int i = 0; i < 5; i++) // Changed loop condition to i < 5
    {
        printf("Enter the number: ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) // Changed loop condition to i < 5
    {
        c[i] = a[i];
    }

    for (int i = 0; i < 5; i++) // Changed loop condition to i < 5
    {
        printf("%d\n", c[i]);
    }

    return 0;
}
