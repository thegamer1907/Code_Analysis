#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll sp[10000007];
ll ct[10000007];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n,m,i,j,num,l,r,pf,cf; cin>>n;
    for(i=2;i<=10000000;i++)
    for(j=i;j<=10000000;j+=i)
    {
        if(sp[j]==0)sp[j]=i;
    }
    vector<int>v(n);
    for(i=0;i<n;i++)cin>>v[i];
    for(i=0;i<n;i++)
    {
        num=v[i];
        pf=sp[num];
        ct[pf]++; num/=pf;
        while(num>1)
        {
            cf=sp[num];
            if(cf!=pf)ct[cf]++;
            num/=cf;
            pf=cf;
        }
    }
    for(i=3;i<=10000000;i++)ct[i]+=ct[i-1];
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        r=min(r,10000000LL);
        l=min(l,10000000LL);
        cout<<ct[r]-ct[l-1]<<"\n";
    }
}
