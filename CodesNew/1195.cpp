#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
#define DOMOD(d) if ((d) >= MOD) d %= MOD;
#define DONEGMOD(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;

#define inp(a) scanf("%d", &a)
#define inp2(a,b) scanf("%d %d", &a, &b)
#define inp3(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define inp4(a,b,c,d) scanf("%d %d %d %d", &a, &b, &c, &d)

#define inpl(a) scanf("%lld", &a)
#define inpl2(a,b) scanf("%lld %lld", &a, &b)
#define inpl3(a,b,c) scanf("%lld %lld %lld", &a, &b, &c)
#define inpl4(a,b,c,d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define all(v) (v).begin(), (v).end()
#define rep(i,a,b) for (int i=a;i<b;i++)
#define mset(a,val) memset(a,val,sizeof(a))
#define printv(v) for (int i=0;i<(int) v.size(); i++) cout<<v[i]<<" "
#define MAX 5000005
using namespace std ;
typedef long long int ll ;
typedef pair<int,int> pii ;
typedef pair<long long , long long > pll ;
typedef pair<int,pii> pipi ;
typedef pair<int,pair<int,string>> piis ;
typedef pair<ll,string> pls ;
typedef pair<ll,pll> plpl ;


int main()
{
	time_t start = clock() ;
	
	int n ; inp(n) ;
	
	int arr[n] ;
	int ans[n] ; 
	int best = 2000000000, gate = -1, temp, temp2 ;
	
	for (int i=0;i<n;i++)
	{
		inp(arr[i]) ;
		temp2 = arr[i] - i - 1 ;
		if (temp2 % n == 0) temp = temp2/n + 1 ;
		else temp = ceil( (temp2 * 1.0) / n ) ;
		
		temp++ ; 
		
		ans[i] = temp*n + i + 1 ;
		if (temp < best)
		{
			best = temp ; 
			gate = i + 1 ; 
		}
	}
	
	
	cout<<gate<<endl ;
	
	time_t end = clock() ;

	double tt = (end - start) / CLOCKS_PER_SEC ;
	cerr<<fixed<<setprecision(5)<<tt<<endl ;

    return 0 ;
}
