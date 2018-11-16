#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
const int N = 2000 + 5;
int find(int n)
{
    for(int i=1;i<=8;i++)
    {
        if(n==pow(2,i))
            return i;
    }
}
int main()
{
    int n,r,l;
    cin>>n>>r>>l;
    int k=find(n);//return cout<<k,0;
    int  rr=max(r,l);
    int ll =min(r,l);
    int ans=0;
    while(n)
    {
        n>>=1;
        if(rr<=n||ll>n)
        {
            ans++;
            if(ll>n)ll-=n,rr-=n;
        }
        else break;
    }
    if(!ans)return puts("Final!"),0;
    cout<<k-ans,0;
}
