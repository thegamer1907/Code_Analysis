#include<bits/stdc++.h>

#define   db(x)         printf("**%d\n",x)
#define   pb            push_back
#define   pii           pair<int,int>
#define   m0d           1000000007
#define   mm(x,y)       memset(x,y,sizeof(x))
#define   fs            first
#define   sc            second

using namespace std;
typedef long long ll;
typedef double dbl;

int prime[10000005],cnt[10000002];
vector<int>fact[10000005],primes;
unordered_map<int,int>mp;
inline void seive(int n)
{
    prime[0]=prime[1]=1;
    for(int i=4; i<=n; i+=2)prime[i]=1;
    for(int i=3; i*i<=n; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=n; j+=2*i)prime[j]=1;
        }
    }
    for(int i=0;i<=n;i++) if(prime[i]==0) primes.pb(i);
}

inline void cal(int x)
{
    int num=x;
    if(prime[x]==0){
        fact[num].pb(x);
        return;
    }
    for(int i=0;primes[i]*primes[i]<=x;i++){
        if(x%primes[i]==0){
            fact[num].pb(primes[i]);
            while(x%primes[i]==0) x/=primes[i];
        }
    }
    if(x) fact[num].pb(x);
    return;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    int tc,cas=1;
    seive(10000000);
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(mp[x]==0)cal(x);
        mp[x]=1;
        for(int j=0;j<fact[x].size();j++) cnt[fact[x][j]]++;
    }
    for(int i=2;i<10000001;i++) cnt[i]+=cnt[i-1];
    int q,l,r;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&l,&r);
        l=min(l-1,10000000);
        r=min(r,10000000);
        printf("%d\n",cnt[r]-cnt[l]);
    }
    return 0;
}
/*sample

*/

