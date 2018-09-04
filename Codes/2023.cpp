//In the name of God B-)	:Alikhm
#include <bits/stdc++.h>
#define pb push_back
#define po pop_back
#define ins insert
#define co continue
#define rp(i,n)	for(int i=0;i<n;++i)
#define rrp(i,n)	for(int i=1;i<=n;++i)
#define db(a,b,c)	cout<<a<<" "<<b<<" "<<c<<endl
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
const LL MAXN=2e5+1,INF=1e17,MOD=1e9+7;

LL a[MAXN],n,ans,k;
map <LL,LL> cnt,p;

int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n>>k;
	for(int i=0;i<n;++i){
        cin>>a[i];
        ++cnt[a[i]];
	}
	for(int i=0;i<n;++i){
        LL n1=0,n2=0;
        if(a[i]%k==0){
            n1=p[a[i]/k];
        }
        n2=cnt[a[i]*k]-p[a[i]*k];
        if(k==1||a[i]==0)  --n2;
        ans+=n1*n2;
        ++p[a[i]];
	}
	cout<<ans<<endl;
	return 0;
}
