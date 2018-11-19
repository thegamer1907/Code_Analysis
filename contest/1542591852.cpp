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
	string s,v[100];
	int n;
	cin >> s >> n;
	forn(i,n)
	{
		cin >> v[i];
		if(v[i]==s)
		{
			cout << "YES\n";
			return 0;
		}
	}
	forn(i,n)forn(j,n)
	{
		if(v[i][1]==s[0] && v[j][0]==s[1])
		{
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}	
