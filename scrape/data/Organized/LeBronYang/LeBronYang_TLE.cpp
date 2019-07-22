#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+7;
#define ios1 std::ios::sync_with_stdio(false)
#define ios2 std::cin.tie(0)
int main()
{
	//ios1;ios2;
    ll n,m,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    ll a[100009];
    ll ans=0,suo=0;
    ll jie=k;
    for(ll i=0; i<m; i++)scanf("%lld",&a[i]);
    ll i=0;
    while(1){
        ll kk=0;
        while((a[i]-suo)<=jie){
            kk++;
            i++;
            if(i==m) break;
        }
        suo+=kk; 
        if(kk==0)jie+=k;
        if(kk!=0)ans++;
        if(i==m)break;
    }
    printf("%lld\n",ans);
    return 0;
}