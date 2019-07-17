#include <bits/stdc++.h>
#define rep(i ,x ,y) for( int i=x ;i<=y ;i++)
using namespace std;
typedef long long ll;

ll m ,n ,k;
ll a[100500];

int main( ){
	scanf("%lld%lld%lld" ,&n ,&m ,&k);
	rep( i , 1 ,m )scanf("%lld" ,&a[i]) ,a[i]--;
	ll div = 0 ,now ,ans =1 ;
	now = a[1]/k;
	rep( i , 2 ,m){
		if( (a[i]-div)/k != now ){
			ans++;
			div = i-1;
			now = (a[i]-div)/k;
		}
	}
	printf("%lld" ,ans);
	return 0;
	}