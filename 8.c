#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char words[4][20]={"my","name","is","vinod"};
    char word1[]="my";
    char word2[]="is";
    int i,w1=-1,w2=-1,min=10000,temp=0;
    for(i=0;i<4;i++)
    {
        if(strcmp(words[i],word1) == 0)
            w1=i;
        if(strcmp(words[i],word2) == 0)
            w2=i;
        
        if(w1!= -1 && w2!= -1)
        {
            temp= abs(w2-w1);
            if(temp<min)
                min=temp;   
        }
    }
    printf("%d ",min-1);
        return 0;
}