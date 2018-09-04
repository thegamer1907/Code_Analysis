#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi pair < int , int  >
#define pp pair < ll , ll >
#define inf 1e18
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define si1(a) scanf("%d",&a)
#define si2(a,b) scanf("%d%d",&a,&b)
#define si3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sl1(a) scanf("%lld",&a)
#define sl2(a,b) scanf("%lld%lld",&a,&b)
#define sl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
using namespace std;
int prime[10000010];
int freq[10000010];
ll ans[10000010],ans1[10000010];
int main()
{
    fill(prime,prime+10000010,1);
    int i,j;
    prime[0]=0;
    prime[1]=0;
    ans[0]=0;
    ans[1]=0;
    for(i=2;i*i<=10000000;i++)
    {
        if(prime[i]==1)
        {
            for(j=i*i;j<=10000000;j+=i)
                prime[j]=0;
        }
    }
    int n;
    si1(n);
    fill(freq,freq+10000010,0);
    for(i=1;i<=n;i++)
    {
        int x;
        si1(x);
        freq[x]=freq[x]+1;
    }
    fill(ans,ans+10000010,0);
    for(i=2;i<=10000000;i++)
    {
        if(prime[i]==1)
        {
            for(j=i;j<=10000000;j+=i)
            {
                ans[i]+=freq[j];
            }
        }
    }
    /*for(i=0;i<=11;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";*/
    ans1[0]=0;
    ans1[1]=0;
    for(i=2;i<=10000000;i++)
    {
        ans1[i]=ans1[i-1]+ans[i];
    }
    int q;
    si1(q);
    while(q--)
    {
        int l,r;
        si2(l,r);
        if(l>10000000)
            l=10000000;
        if(r>10000000)
            r=10000000;
        cout<<ans1[r]-ans1[l-1]<<"\n";
    }
    return 0;
}
