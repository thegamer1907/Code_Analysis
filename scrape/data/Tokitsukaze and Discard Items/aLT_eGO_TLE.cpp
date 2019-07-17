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
	 ll tk = k;
	 int arr[m];
	 for (int i = 0; i < m; ++i)
	 {
	 	cin>>arr[i];
	 }
	 ll count = 0;
	 ll des = 0;
	 for (int i =1; i <= m; ++i)
	 {
	 	ll t = des;
	 	count++;
	 	i--;
	 	//cout<<k<<" : ";
	 	while(arr[i]-t <= k && i < m)
	 	{
	 		des++;
	 		//cout<<arr[i]<<" ";
	 		i++;
	 	}

	 	//cout<<"\n";

	 	if(t == des)
	 	{	
	 		float temp  = arr[i]/tk;
	 		int tt = ceil(temp);
	 		k = (temp)*tk;

	 		count--;
	 	}
	 }

	 cout<<count<<"\n";
	return 0;
}