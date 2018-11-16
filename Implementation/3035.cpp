#include <bits/stdc++.h>
#define int long long
#define ld long double
#define all(c) c.begin(),c.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define efor(i,a) for(auto i : a)
#define rev1(i,n) for(int i=n-1;i>=0;i--)
#define forst(it,p) for(auto it=p.begin();it!=p.end();it++)
#define dbg(x) cout <<#x<<":"<<x<<'\n'
#define dbg2(x,y) cout<<#x<<":"<<x<<' '<<#y<<":"<<y<<'\n'
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define endl '\n'
#define inf 1000000010
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);
	int a,b;
	cin>>a>>b;
	if(a>=b)
		swap(a,b);
	int ans=1;
	rep(i,0,a)
		ans*=(i+1);
	cout<<ans<<endl;
	return 0;
}