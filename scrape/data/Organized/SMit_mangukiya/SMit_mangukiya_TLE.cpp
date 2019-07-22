#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb emplace_back
#define f(i,a,n) for(int i=a ; i<n ; i++)
#define F first
#define S second
#define fast ios:: sync_with_stdio(false),cin.tie(0);

int32_t main(){
	fast;
	int n,m,k;
	cin >> n >> m >> k;
	
	int a[m];
	f(i,0,m)    cin >> a[i];
	
	int ans = 0 , temp = 0;
	int i=0;
	while(i < m)
	{
		int cnt = ceil((a[i] - temp)/(double)k);
		
		int xx = 0;
		while(i<m && ceil((a[i] - temp)/(double)k) == cnt)  xx++ ,i++;
		
		temp += xx;
		ans ++;
	}
	cout << ans;
}