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

int m[16];
int k;
vector<int> v;

bool solve(int quedan)
{
	if(quedan==0)
	{
		int aux;
		forn(i,k)
		{
			aux=0;
			forn(j,v.size()) if((v[j]&(1<<i))==0) aux++;
			if(aux<v.size()/2) return false;
		}
		return true;
	}
	forn(i,16)if(m[i])
	{
		m[i]--;
		v.pb(i);
		if(solve(quedan-1)) return true;
		v.pop_back();
		m[i]++;
	}
	return false;
}

int main()
{
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	ios::sync_with_stdio(false);
	int n,aux,x;
	cin >> n >> k;
	forn(i,n)
	{
		aux=0;
		forn(j,k)
		{
			cin >> x;
			if(x) aux+=(1<<j);
		}
		m[aux]++;
	}
	if(m[0]>0 || (k>=2 && solve(2)) || (k>=3 && solve(4))) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}	
