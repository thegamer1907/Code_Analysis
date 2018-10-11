#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
const int maxn=1e7+7;
vl primes,iscomp(maxn,0);
void sieve()
{
    for(int i=2;i<maxn;i++)
    {
        if(!iscomp[i])
            primes.pb(i);
        for(int j=0;j<primes.size() && i*primes[j]<maxn;j++)
        {
            iscomp[i*primes[j]]=1;
            if(i%primes[j]==0)
                break;
        }
    }
}
int main()
{
    fastio;
    sieve();
    int n;
    cin>>n;
    vl cnt(maxn,0),ans(maxn,0),psum(maxn,0);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cnt[x]++;
    }
    for(int j=0;j<primes.size();j++)
    {
        int x=primes[j];
        for(int i=x;i<maxn;i+=x)
            ans[x]+=cnt[i];
    }
    for(int i=1;i<maxn;i++)
    {
        psum[i]=psum[i-1]+ans[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        if(l>maxn)
            cout<<0<<endl;
        else
            cout<<psum[min(r,maxn-1)]-psum[l-1]<<endl;
    }
}
