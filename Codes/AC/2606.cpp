//... copyright @ASHISH JHA ... _/\_******
/*Licensed under the "THE BEER-WARE LICENSE" (Revision 42):
Ashish_Jha wrote this file. As long as you retain this notice you
can do whatever you want with this stuff. If we meet some day, and you think
this stuff is worth it, you can buy me a beer or coffee in return
*/

#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef long long int ll ;
#define ld long double
#define MOD 1000000007
#define pb push_back
#define pi pair<ll,ll>
#define pii pair<ll,pair<ll,ll>>
#define chal(n) for(ll i=0;i<n;i++)
#define si1(a) scanf("%d",&a)
#define si2(a,b) scanf("%d%d",&a,&b)
#define si3(a,b,c) scanf("%d%d%d",&a,&b,&c)9
#define sl1(a) scanf("%lld",&a)
#define sl2(a,b) scanf("%lld%lld",&a,&b)
#define sl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
const ll INF = 1e18;
inline ll in() {
        ll p=0; register char ch=0;
        while(ch<'0' or ch>'9') {ch=getchar();}
        while(ch>='0' and ch<='9') {p=(p<<1)+(p<<3)+ch-'0'; ch=getchar();}
        return p;}

/* coordinates in a hexagonal cell
0 1 -> 0 -1 -> 1 0 -> 1 -1 -> -1 0 -> -1 1
*/

ll prime[10000001];
void seive()
{
    memset(prime,0,sizeof(prime));
    prime[0]=1;
    prime[1]=1;
    for(ll i=2;i*i<10000001;++i)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<10000001;j+=i)
                prime[j]=1;
            }
    }
}
ll co[10000001],f[10000001];

void solve()
{
    memset(f,0,sizeof(f));
    for(ll i=2;i<10000001;++i)
    {
        if(prime[i]==0)
        {
            for(ll j=i;j<10000001;j+=i)
                f[i]+=co[j];
        }
    }
    for(ll i=1;i<10000001;++i)
        f[i]+=f[i-1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

seive();
   ll n;
   cin>>n;
   ll ar[n];
   memset(co,0,sizeof(co));
   chal(n)
       {
           cin>>ar[i];
           co[ar[i]]++;
       }
       solve();
       ll m;
       cin>>m;
       while(m--)
       {
           ll l,r;
           cin>>l>>r;
           if(l>10000000)
            cout<<"0"<<endl;
           else
           {
               if(r>10000000)
                r=10000000;
                cout<<f[r]-f[l-1]<<endl;
           }
       }
       return 0;
}
