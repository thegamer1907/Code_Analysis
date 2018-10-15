/*input
12
3
99
24
46
75
63
57
55
10
62
34
52
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ss string
#define INF 1000000000000000000
#define rep(i,j,n) for (ll i = j; i < n; ++i)

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll a[n];
    rep(i,0,n) cin>>a[i];
    sort(a,a+n);
    ll k = n/2,ans=0;
    for (ll i=0,j=k; i<k&&j<n; ++j)
    {
    	if(a[j]>=2*a[i]) ans++,i++;
    }
    cout<<n-ans<<endl;

	return 0;
}