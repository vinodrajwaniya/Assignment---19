#include<stdio.h>
#include<string.h>

int main()
{
    char a[3][20];
    int i;
    printf("Enter three string ");
    for(i=0;i<3;i++)
    gets(a[i]);
    for(i=0;i<3;i++) 
    {
        if(strchr(a[i],'@') !=0)
            printf("\n%s\n",a[i]);
    }
    return 0;
}