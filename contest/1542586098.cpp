#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define sqr(a) ((a)*(a))
#define RAND(a,b) ((a)+rand()%((b)-(a)+1))
#define rsz resize
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef long long ll;
typedef pair<int,int> ii;

int main()
{
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	ios::sync_with_stdio(false);
	int v[5],h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	h%=12;
	t1*=3600*5;
	t2*=3600*5;
	//cout << t1 << "\n" << t2 << "\n";
	v[0]=t1;
	v[1]=t2;
	v[2]=s*3600;
	v[3]=3600*m+60*s;
	v[4]=3600*h*5+m*60+s;
	sort(v,v+5);
	if(t1>t2) swap(t1,t2);
	//forn(i,5) cout << v[i] << ' ' << v[i]/3600.0 << "\n";
	forn(i,4)
	{
		if(v[i]==t1 && v[i+1]==t2)
		{
			cout << "YES\n";
			return 0;
		}
	}
	if(v[0]==t1 && v[4]==t2) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}	
