#include<stdio.h>
#include<string.h>

void fact()
{
    int n,i,sum=1;
    printf("Enter an number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum*i;
    printf("Username is matched\n");
    printf("Factorial is %d ",sum);
}

int main()
{
    char a[4][20]={"vinod","Deepak","Dheeraj","Rahul"};
    char word[20];
    int i=0,flag=0;
    printf("Enter a username ");
    gets(word);
    for(i=0;i<4;i++)
    {   
        if(strcmp(a[i],word)==0)
        {
                fact();
            flag=1;
        }
    }
    if(flag==0)
    printf("Username is not matched ");
    return 0;
}