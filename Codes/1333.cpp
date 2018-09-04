#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n1=0,n2=0;
    map<string,int>mp;
    int n,m;
    string s;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(mp[s]==0)
        {
            mp[s]=1;
            n1++;
        }
    }
    int ss=0;
    for(int i=0;i<m;i++)
    {
        cin>>s;
        if(mp[s]==0)
        {
            mp[s]=-1;
            n2++;
        }
        else if(mp[s]==1)
        {
            mp[s]=-1;
            ss++;
        }
    }
    if(n1-ss/2>ss/2+n2)
    {
        puts("YES");
    }
    else
        puts("NO");
}
