/* 2018-05-01-14.31.30*/

#include<bits/stdc++.h>
#define ll long long int
#define N 1000010
using namespace std;
ll p=1e6+1,mod=1e9+7;
ll power(ll a,ll b)
{
    if(b==0) return 1;
    ll temp=power(a,b/2);
    temp=(temp*temp)%mod;
    if(b%2==1) temp=(temp*a)%mod;
    return temp;
}
vector<pair<ll,ll> > store;
string s;
ll HASH[N],L=s.length(),P[N],HASH2[N];
bool check(ll l,ll tt)
{
    for(ll i=1;i<L-1;i++)
    {
        if(i+l-1>=L-1) break;
        ll temp=(HASH[i+l-1]-HASH[i-1]+mod)%mod;
        temp=(temp*power(P[i],mod-2))%mod;
        if(temp==tt) return true;
    }
    return false;
}
ll binary(ll l,ll r)
{
    ll L=l,R=r,temp=-1;
    while(L<=R)
    {
        ll mid=(L+R)/2;
        if(check(store[mid].first,store[mid].second)) temp=store[mid].first,L=mid+1;
        else R=mid-1;
    }
    return temp;
}
int main()
{
    cin >> s;
    L=s.length();
    P[0]=1;
    for(ll i=1;i<L;i++) P[i]=(P[i-1]*p)%mod;
    HASH[0]=s[0]-'a';
    HASH2[0]=s[L-1]-'a';
    if(HASH[0]==HASH2[0]) store.push_back(make_pair(1,HASH[0]));
    for(ll i=1;i<L;i++)
    {
        ll temp=(P[i]*(s[i]-'a'))%mod;
        HASH[i]=(HASH[i-1]+temp)%mod;
        temp=(HASH2[i-1]*p)%mod;
        HASH2[i]=(temp+s[L-i-1]-'a')%mod;
        if(HASH2[i]==HASH[i]) store.push_back(make_pair(i+1,HASH[i]));

    }
    ll temp=binary(0,(ll)store.size()-1);
    if(temp!=-1)
    {
        for(ll i=0;i<temp;i++) printf("%c",s[i]);
        return 0;
    }
    printf("Just a legend\n");
}
