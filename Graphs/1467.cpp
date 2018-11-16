
/* 
ID: diksham1
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define pb push_back 
#define eb emplace_back
#define ub upper_bound
#define lb lower_bound
#define all(arr) arr.begin(),arr.end()
#define read(arr,n) for(int i = 1; i<=n; i++) cin>>arr[i]
#define print(arr,n) for(int i = 1; i<=n; i++) cout << arr[i] <<' '

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<ll,ll> pii;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n,t;
	cin >> n >> t;

	vi arr(n+1);
	n--;	//n = 3
	read(arr, n);

	long pos = 1;

	do	
	{
		if(pos == t)
		{
			cout <<"YES\n";
			return 0;
		}	
		pos += arr[pos];
		if(pos == t)
		{	
			cout <<"YES\n";
			return 0;	
		}
	}
	while(pos < n+1);
	cout << "NO\n";

	return 0;
}
