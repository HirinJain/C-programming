#include <stdio.h>
int main()
{

    int a[100],c[100];
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter The Number : ");
        scanf("%d", &a[i]);
    }
    printf("Reverse of the array : ");
    for (int i = 5; i >= 0; i--)
    {

        printf("%d", a[i]);
    }
    return 0;
}