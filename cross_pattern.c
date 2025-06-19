#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=9;r++)
    {
        for(c=1;c<=9;c++)
        {
            if(r==c || r+c==10)
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