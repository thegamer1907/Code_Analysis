#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    char ara[a];
    scanf("%s",&ara);
    while(b--)
    {
        for(i=0;i<a;i++)
        {
        if(ara[i]=='B'&&ara[i+1]=='G')
        {
            ara[i]='G';
            ara[i+1]='B';
            i++;
        }
        }
    }
    printf("%s",ara);
    return 0;
}
