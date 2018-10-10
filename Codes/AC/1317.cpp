#include<stdio.h>
#include<algorithm>
#include<string>
#include<string.h>
#include<queue>
#include<vector>
#include<stack>
#include<math.h>
#include<map>
#include<iostream>
using namespace std;
#define maxn 2000005
#define ll long long
int n,m,cntn=0,cntm=0;
int main()
{
    map<string,int> mp;
    scanf("%d%d",&n,&m);
    cntn=n,cntm=m;
    int cnt=0;
    while(n--)
    {
        string a;
        cin>>a;
        mp[a]=1;
    }
    while(m--)
    {
        string b;
        cin>>b;
        if(mp[b]==1)
        {
            cnt++;
            cntn--;
            cntm--;
        }
    }
    cntn+=(cnt+1)/2;
    cntm+=cnt-(cnt+1)/2;
    if(cntn>cntm)
        printf("YES\n");
    else
        printf("NO\n");

return 0;
}
