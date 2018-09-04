#include<bits/stdc++.h>
using namespace std;

long long int f(long long int x, long long int n, long long int m){
	long long int ans = 0;
	--x;
	for(int i=1;i<=n;i++){
		ans+=min(m,x/i);
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	long long int n,m;
	cin>>n>>m;

	long long int k;
	cin>>k;

	long long int l=1ll,r = n*m+1;

	while(l<r){
		long long int mid = (l+r)/2;
		if(f(mid,n,m)<k) l=mid+1; else r=mid;
	}

	cout<<l-1;
	return 0;
}