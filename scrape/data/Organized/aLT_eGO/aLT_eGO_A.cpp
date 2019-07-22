#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define pb push_back

ll mod = 1000000007;

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	 freopen("input.txt", "r", stdin);
	 freopen("output.txt", "w", stdout);
	#endif
	 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	 ll n,m,k;
	 cin>>n>>m>>k;
	 ll arr[m];
	 for (int i = 0; i < m; ++i)
	 {
	 	cin>>arr[i];
	 }

	 int ans =0 ;
	 int sum = 0;
	 int i = 0;

	 while(i<m)
	 {
	 	ll t = ((arr[i]-sum-1)/k+1)*k+sum;
	 	//cout<<((arr[i]-sum-1)/k+1)<<" ";
	 	//cout<<t<<"\n";	 	
	 	while(i < m && arr[i] <= t)
	 	{
	 		sum++;
	 		i++;
	 	}
	 	ans++;
	 }

	 cout<<ans<<"\n";
	 
	return 0;
}