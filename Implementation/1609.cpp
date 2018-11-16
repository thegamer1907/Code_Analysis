#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string.h>
#define f str[i]==
using namespace std;
const int maxn=2e5+10;
char str[110];
int main()
{
    scanf("%s",str);
    int cnt=1;
    int len=strlen(str);
    int ans=0;
    for(int i=1;i<len;i++)
    {
        if(str[i]==str[i-1])
            cnt++;
        if(cnt>=7)
        {
            ans=1;break;
        }
        if(str[i]!=str[i-1])
            cnt=1;
    }
    if(ans)
        puts("YES");
    else
        puts("NO");
}
