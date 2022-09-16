#include<stdio.h>
#include<string.h>

int main()
{
    int i,flag=0;
    char a[3][2][20]= {{"vinod","123"}, {"dheeraj","213"},{"Deepak","321"}};
        
    char username[]="vinod";
    char password[]="13";

    for(i=0;i<3;i++)
    {
        if(strcmp(username,a[i][0]) == 0 && strcmp(password,a[i][1]) == 0)
        {
            printf("Login Successful !!");
            flag=1;
        }
    }
    if(flag == 0)
        printf("Username or Password not matched");
    return 0;
}