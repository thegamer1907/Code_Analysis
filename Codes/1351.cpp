

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
#define uniq(v)			v.resize(distance(v.begin(),unique(v.begin(),v.end())))
#define found( s,d )    (s.find(d) != s.end())

#define FOR(i,s,e)      for( LL i = s ; i<=e ; i++ )

#define FILEIN          freopen("in.txt","r",stdin)
#define FILEOUT         freopen("out.txt","w",stdout)

using namespace std;

struct info {
	LL id , a;
	bool operator < (const info ag)const{
		return (id+a)<(ag.id+ag.a);
	}
} A[100010] , B[100010];

int main() {

	LL n, S;
	SL(n); SL(S);
	FOR(i, 1, n) {
		SL(A[i].a);
		A[i].id = i;
	}

	sort( A+1 , A+1+n );

	
	LL ansk = 0 , ansc = 0;
	LL l = 1 , r = n;
	while (l <= r) {
		//cout<<l<<' '<<r<<endl;
		LL k = (l + r) / 2;
		for( LL i = 1 ; i<=n ; i++ ){
			B[i].id = A[i].id*k;
			B[i].a = A[i].a;
		}
		sort(B+1,B+n+1);
		LL sum = 0;
		for( LL i = 1 ; i<=k ; i++ ) {
			sum+=(B[i].a+B[i].id);
			//cout<<B[i].a<<' '<<B[i].id<<'#'<<endl;
		}

		if( sum<=S ){
			ansk = k;
			ansc = sum;
			//cout<<sum<<endl;
			l = k+1;
		}
		else r = k - 1;

	}

	cout<<ansk<<' '<<ansc<<endl;


	return 0;
}