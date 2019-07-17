#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[m] ;
	for(ll i=0;i<m;i++)cin>>a[i];
	ll ind=0,count=0,x;
	for(ll i=0;i<m;){
		count++;
		x = (a[i]-ind-1)/k + 1 ;
		int kind = ind ;
		int count = 0 ;
		while(i < m && a[i]-kind <= x*k && count < k){
			ind++ , i++ ;
		}
	}
	cout << count ;

	return 0;
}