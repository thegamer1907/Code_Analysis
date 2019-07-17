#include <bits/stdc++.h>
#define maxn 200005
using namespace std;
typedef long long ll;
ll num[100005];

int main()
{
    ll n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    for(int i=1;i<=m;i++){scanf("%lld",&num[i]);}
    int t=m;ll pos=0;int fir=1;ll ans=0;
    while(t){
        int temp=(num[fir]-pos-1)/k*k+1;
        int times=0;
        while(num[fir]-pos<=(temp+k-1)&&fir<=m&&t){
            times++;t--;fir++;
        }
        pos+=times;
        ans++;
    }
    printf("%lld\n",ans);
}