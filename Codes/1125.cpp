#include<bits/stdc++.h>
using namespace std;
#define fast_io() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
pair< ll , ll > a[100005] ;
deque < pair<ll, ll > > b ;
int main(){
  fast_io();
	ll n , d ; 
	cin >> n >> d ;
	for(int  i =0 ; i<n ; i++ ){
		cin >> a[i].first >> a[i].second ;
	}
	sort( a, a+n ) ;
	ll res = a[0].second , cnt = a[0].second ;
	b.push_back( a[0]) ;
	for(int i = 1 ; i<n ; i++ ){
		if( abs(b.front().first-a[i].first)<d ){
			b.push_back( a[i] ) ;
			cnt+=a[i].second;
		}
		else{
			res = max( res, cnt );
			while( !b.empty() && abs(b.front().first-a[i].first )>=d ){
				cnt-=b.front().second;
				b.pop_front();
			}
			cnt+=a[i].second;
			b.push_back( a[i] ) ;

		}
	}
	res= max ( res, cnt ) ;
	cout<<res<<endl;
	return 0;
}