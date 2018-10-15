#include<iostream>
#include<cstring>
#include<climits>
#include<map>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<numeric>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<iomanip>

using namespace std;

#define ll long long
#define fi first
#define se second
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<ll,ll>
#define INF 1000000007
#define sz 100000
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define mit(m) for(map<ll,ll> :: iterator it=m.begin();it!=m.end();++it)
using namespace std;


ll arr[5*sz];


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,temp;
	cin>>n;
	rep(i,0,n)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int ans=n-1;
	for(int i=n/2-1;i>=0;--i)
	{
		if(2*arr[i]<=arr[ans])
		{
			--ans;
		}
	}
cout<<ans+1;


	


	


	




	


	







	}
	
	

	
	
		
	



	

