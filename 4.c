#include<stdio.h>
#include<string.h>

int main()
{
    char a[3][20],t[20];
    int i,j,flag=0;
    printf("Enter three name ");
    for(i=0; i<3; i++)
        gets(a[i]);
    for(i=0; i<2; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(strcmp(a[i],"Vinod")==0)
                flag++;
            break;
        }
    }
    if(flag==1)
            printf("string Found");
        else
            printf("String not found");
}