#include<bits/stdc++.h>
using namespace std;

#define llong long long int
#define ll long long int
#define mod 1000000007

int main()
{
	ios_base::sync_with_stdio(false);
	
	llong n, k;
	cin>>n>>k;
	
	llong a[n+5];
	
	for( int i=1;i<=n;i++ )
		cin>>a[i];
	
	if( n<3 )
	{
		cout<<"0\n";
		return 0;
	}
	
	unordered_map<llong, llong> lm, rm;
	
	for( int i=1;i<=n;i++ )
		rm[ a[i] ]++;
	
	llong ans = 0;
	
	rm[ a[1] ]--;
	
	for( int i=2;i<n;i++ )
	{
		lm[ a[i-1] ]++;
		rm[ a[i] ]--;
		
		if( a[i]%k!=0 )
			continue;
		
		ans += ( lm[ a[i]/k ]*rm[ a[i]*k ] );
	}
	
	cout<<ans<<endl;
	
	return 0;
}