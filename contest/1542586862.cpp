#include<iostream>
#include<string.h> 
#include<stdio.h>
using namespace std;
char pass[102][5],tar[5];
int main()
{
    int n;
    int end=0,start=0;
    scanf("%s",tar);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",pass[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(strcmp(pass[i],tar)==0) 
        {
            printf("YES\n");
            return 0;
        }
        if(pass[i][1]==tar[0]) start=1;
        if(pass[i][0]==tar[1]) end=1;
        if(start&&end) 
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}