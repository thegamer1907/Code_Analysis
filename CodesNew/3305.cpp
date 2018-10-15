#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(ll i =0;i<n;i++)
#define pb push_back
#define ll long long
#define F first
#define S second
#define mp make_pair
#define int long long

 int n,m;
int a[200];

int bs()
{
	int l = 1;
	int h = 1e5;
	int ans = 1;
	while(l<=h)
	{
		int mid = (l+h)/2;
		int ct = 0;
		bool f = 0;
		for(int i =0;i<n;i++)
		{
			if(mid<a[i]) f = 1;
			ct += mid - a[i];
		}
		if(ct<m || f) l = mid  + 1;
		else h = mid - 1 , ans = mid;
	}
	return ans;
}

int32_t main()
{
   ios_base::sync_with_stdio(false),cin.tie(0);
   
  
   cin>>n>>m;
   int  mx = 0;
   fori(i,n) {cin>>a[i];mx= max(mx,a[i]);}
   // mx += m;
   int ans = bs();  
   ans = max(ans,mx);
   mx += m;
   cout<<ans<<" "<<mx; 
   return 0;
}   