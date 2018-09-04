#include<bits/stdc++.h>

using namespace std;

// Shortcuts for "common" data types in contests
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
// To simplify repetitions/loops, Note: define your loop style and stick with it!
#define s(i) scanf("%d",&i)
#define sl(i) scanf("%ld",&i)
#define sll(i) scanf("%lld",&i)
#define REP(i, a, b) \
for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define NREP(i,a,b) \
for (int i = int(a); i >= int(b); i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
#define INF 2000000000 // 2 billion

int a[100009],S , n ;
ll temp[100009] , sum;

bool compute(int mid){
	for(int i = 0 ; i < n ; i++ ){
		temp[i] = (i + 1) * 1ll * mid + a[i];
	}
	sort(temp,temp + n);
	sum = 0 ;
	for( int i = 0 ; i < mid ; i++ ){
		sum += temp[i];
	}
	if( sum <= S ) {
		return true;
	}
	return false;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    s(n) ; s(S) ; 
    for( int i = 0 ; i < n ; i++ ){
    	s(a[i]);
    }
    int low = 0  , high = n;
    while( low < high ){
    	int mid = ( low + high + 1 ) / 2;
    	if( compute(mid) ) {
    		low = mid;
    	}
    	else {
    		high = mid - 1;
    	}
    }
    compute(low);
    printf("%d %lld\n",low,sum);
    return 0;
}
