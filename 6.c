#include<stdio.h>
#include<string.h>

int main()
{
    char a[6][20];
    int i,j,flag=0;
    printf("Enter 5 strings ");
    for(i=0;i<6;i++)
    gets (a[i]);
    i=0;
    j=5;
    while (i<=j)
    {
        if(a[i]!=a[j])
            break;
        i++;j--;
    }
    if(i>j)
        printf("This is palindrome");
    else
        printf("This is not palindrome");
    return 0;
}