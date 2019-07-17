#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mx2 102
#define mx3 1003
#define mx4 10004
#define mx5 100005
#define mx6 1000006
#define mod 1000000007
#define PI 3.14159265
#define f0(i,n) for(int i=0 ; i<n ; i++)
#define f1(i,n) for(int i=1 ; i<=n ; i++)
 
typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<pair<int,int>,int> piii;

ll n , m , k ,ans , l , arr[mx5];
ll s , cnt;
 
int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m >> k;
	f0(i,m) cin >> arr[i];
	l=k;
	while(1)
	{
		if(s>=m) break;
		cnt=0;
		
		for(int i=s; i<m ; i++)
		{
			if(arr[i]<=l) cnt++;
			else break;
		}
		//cout << s << " " << l << " " << cnt << "\n";
		if(cnt==0) 
		{
			ll t=(arr[s]-l)/k;
			l+=t*k;
		}
		else
		{
			ans++;
			l+=cnt;
			s+=cnt;
		}
	}
	cout << ans;

	return 0;
}