#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Two number : ");
    scanf("%d %d",& x ,& y);
    while (y!=0)
    {
        x++;
        y--;
    }
    printf("sum of two numbers : %d ",x);
    
}