//in the name of god
#include <bits/stdc++.h>
using namespace std;
#define MAX_N (int)1e6+20
#define INF 1e18+20
#define pb push_back
#define F first
#define S second
#define lch(A) (A)<<1
#define rch(A) ((A)<<1)|1
#define par(A) (A)>>1
typedef  long long LL;
#define int LL
typedef pair<int,int> pii;
const int delta=(LL)1e9+7;
int n,d,m,s,ans,a[MAX_N],l,r,x;
map<int,int>p;
main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin>>n>>d;
	while(n--){
		cin>>m>>s;  p[m]+=s;
	}
	for(map<int,int>::iterator it=p.begin();it!=p.end();++it) a[l++]=it->F;
	for(int i=0;i<l;++i){				
		while(a[i]-a[r]>=d) x-=p[a[r++]];
		x+=p[a[i]];
		ans=max(ans,x);
	}
	cout<<ans;
	return cout<<endl,0;
}