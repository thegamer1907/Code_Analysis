
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
char s[1000010];
int Next[1000010];
int vis[1000010];
void get_next(int m)
{
    int i=0,j=-1;
    Next[0]=-1;
    while(i<m)
    {
        if(j==-1||s[i]==s[j])
        {
            i++;
            j++;
            Next[i]=j;
        }
        else
            j=Next[j];
    }
}
int main()
{
    while(~scanf("%s",s))
    {
        int n=strlen(s);
        get_next(n);
        for(int i=0; i<n; i++)
            vis[Next[i]]=1;
        int k=Next[n];
        while(k)
        {
            if(vis[k]!=0)
            {
                for(int i=0; i<k; i++)
                    printf("%c",s[i]);
                printf("\n");
                break;
            }
            else
                k=Next[k];
        }
        if(k==0)
            printf("Just a legend\n");

    }

    return 0;
}
