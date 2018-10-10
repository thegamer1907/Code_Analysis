#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    string str;
    map<string,int>q;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        q[str]++;
    }
    int cnt=0;
    for(int i=1;i<=m;i++)
    {
        cin>>str;
        q[str]++;
        if(q[str]==2) cnt++;
    }
    n=n-cnt;  m=m-cnt;
    if(cnt&1) n++;

    if(n<=m) printf("NO\n");
    else printf("YES\n");
}
