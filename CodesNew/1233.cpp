#include <bits/stdc++.h>
#define LL              long long
#define SL(n)           scanf("%lld",&n)
#define LF              double
#define SF(n)           scanf("%lf",&n)

#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair

#define ON(n,i)         (n|(1<<i))
#define OFF(n,i)        (n&(~(1<<i)))
#define CHK(n,i)        (n&(1<<i))

#define SET(arr)        memset( arr , -1 , sizeof arr)
#define RESET(arr)      memset( arr,0,sizeof arr)

#define srt(v)          sort(v.begin(),v.end())
#define found( s,d )    (s.find(d) != s.end())

#define FOR(i,s,e)      for( LL i = s ; i<=e ; i++ )

#define FILEIN          freopen("in.txt","r",stdin)
#define FILEOUT         freopen("out.txt","w",stdout)

using namespace std;

#define lim 100010
LL a[lim];


int main(){

	LL n; SL(n);
	LL pos = 0;

	LL mn = 1e18;
	FOR(i,0,n-1){
		SL(a[i]);
		mn = min( mn , a[i] );
	}

	LL stp = mn;
	FOR( i , 0 , n-1 ) a[i] = a[i] - mn;

	pos =( pos + mn ) % n;

	LL m = 0;
	FOR( i , 1, n ){
		if( a[pos] == 0 ) break;
		stp++;
		pos = (pos  + 1)%n;
		a[pos] = max( 0LL , a[pos]-m-1 );
		m++;
		//cout<<pos<<' '<<a[pos]<<endl;
	}

	cout<<(stp%n + 1)<<endl;

	
return 0;}