#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        { 
            if((r==c || r==5 || c==1))
            {
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}