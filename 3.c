#include<stdio.h>
#include<string.h>
void display(char a)
{
    printf("\n%s ",a);
}


char input()
{
    char a[20];
    int i;
    printf("Enter three string ");
    for(i=0;i<3;i++)
    {
    gets(a[i]);
    }
    return a;
}

int main()
{
    char a[3][20];
    int i,j;
    for(i=0;i<3;i++)
    {
        a[i][j]=input();
    }
    
    for(i=0;i<3;i++)
        display(a[i]);
    printf("%s\n",a[i]);
    return 0;
}