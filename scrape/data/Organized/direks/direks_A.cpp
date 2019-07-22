#include<bits/stdc++.h>
using namespace std;
const int Size=1024;
const int  mod=1e9+7;
#define lson  rt<<1
#define rson  rt<<1|1
#define rep(i,a,b)  for(i=a;b>=i;++i)
#define dep(i,a,b)  for(i=a;i>=b;--i)
#define pb  push_back
#define pii pair<int,int>
typedef long long ll;
const int  maxn=1e5+15;

ll p[maxn];
int main()
{
    ll n,m,k,i;
    scanf("%I64d%I64d%I64d",&n,&m,&k);
    for(i=1;m>=i;i++) scanf("%I64d",&p[i]);
    ll ans=0;
    ll num;
    ll res=0;
    while(m!=ans)
    {
        num=ans+1;
        ll block=(p[num]+k-ans)/k;
        if((p[num]-ans)%k==0) block--;
        ll nt=upper_bound(p,p+m+1,block*k+ans)-p;
        ans=nt-1;
        res++;
    }
    printf("%I64d\n",res);
    return 0;
}