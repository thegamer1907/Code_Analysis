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

ll n, m, a[1000], b[1000], ans, k;
bool col[1000];

int main()
{
	cin>>n;
	fr(i, n)
		cin>>a[i];
	cin>>m;
	fr(i, m)
		cin>>b[i];
	sort(a, a+n);
	sort(b, b+m);
	fr(i, n)
	{
		k=lower_bound(b, b+m, a[i]-1)-b;
		while(abs(a[i]-b[k])<=1)
		{
			if(col[k]==false)
			{
				ans++;
				col[k]=true;
				break;
			}
			k++;
		}
	}
	cout<<ans<<endl;
	return 0;
}