#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long int
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()

typedef tree< int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
		
	#ifndef ONLINE_JUDGE
		time_t t1 = clock(), t2;
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("err.txt", "w", stderr);
	#endif
	
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;cin>>arr[i++]);

	int distinct[n];
	distinct[n-1]=1;
	
	int included[100001];
	memset(included,0,sizeof(included));

	included[arr[n-1]]=1;

	for(int i=n-2;i>=0;i--)
	{
		if(!included[arr[i]])
		{
			included[arr[i]]=1;
			distinct[i]=distinct[i+1]+1;
		}
		else
			distinct[i]=distinct[i+1];
	}

	for(int i=0;i<m;i++)
	{
		int l;
		cin>>l;
		cout<<distinct[l-1]<<endl;
	}

	#ifndef ONLINE_JUDGE
		t2 = clock();
		cerr<<endl<<"time : "<<(t2-t1)/1000.0;
	#endif
	return 0;
}