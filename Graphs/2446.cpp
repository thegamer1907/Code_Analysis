#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <functional>
#include <cmath>
#include <map>
using namespace std;
 
#define ll long long
#define ld long double
#define pb push_back
#define fr(i, n) for(ll i=0;i<(ll)n;i++)
#define frx(i, x, n) for(ll i=(ll)x;i<(ll)n;i++)
#define frb(i, n) for(ll i=(ll)n-1;i>=0;i--)
#define frbx(i, x, n) for(ll i=(ll)n-1;i>=(ll)x;i--)
const ll mod = (ll)1e9 + 7;

ll n, a, c[10005], si, xi;
bool col[10005];
vector<ll> g[10005], set[10005];
queue <ll> qu, pu;

int main()
{
	cin>>n;
	frx(i, 2, n+1)
	{
		cin>>a;
		g[a].push_back(i);
	}
	frx(i, 1, n+1)
		cin>>c[i];
	qu.push(1);
	while(!qu.empty())
	{
		a=qu.front();
		col[a]=true;
		pu.push(a);
		xi=c[a];
		while(!pu.empty())
		{
			a=pu.front();
			set[si].push_back(a);
			fr(i, g[a].size())
			{
				if(!col[g[a][i]] && c[g[a][i]]==xi)
				{
					col[g[a][i]]=true;
					pu.push(g[a][i]);
				}
				else if(!col[g[a][i]])
					qu.push(g[a][i]);
			}
			pu.pop();
		}
		si++;
		qu.pop();
	}
	cout<<si<<endl;
	return 0;
}