#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    while(a!=0)
    {
        b = a%10;
        c = a/10;
        if (c == b)
        {
            printf("is a palindrome");
            
        }
        else
        {
            printf("is not a palindrome");
        }
        a -=a;

    }
    
    return 0;
}