#include <bits/stdc++.h>

#define ll long long
#define ii pair<int,int>
#define iii pair<int,ii>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define LL(x) (x << 1)
#define RR(x) ((x << 1) + 1)
#define sqr(x) ((x) * (x))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define onbit(x,k) (x | (1<<k))
#define offbit(x,k) (x & (~(1<<k)))
#define getbit(x,k) ((x>>k) & 1)
#define cross(A,B) (A.x*B.y-A.y*B.x)
#define dot(A,B) (A.x*B.x+A.y*B.y)
#define ccw(A,B,C) (-(A.x*(C.y-B.y) + B.x*(A.y-C.y) + C.x*(B.y-A.y)))
#define CROSS(a,b,c,d) (a*d - b*c)
#define ALL(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define FOR(i,a,b) for (int i=(a); i<=(b); ++i)
#define REP(i,a,b) for (int i=(a); i<(b); ++i)
#define FORD(i,a,b) for (int i=(a); i>=(b); --i)
#define REPD(i,a,b) for (int i=(a); i>(b); --i)
#define DEBUG(x) { cerr << #x << " = " << x << '\n'; }
#define ARR(x,l,r) { cerr << #x << " = {"; FOR(_,l,r) cerr << ' ' << x[_]; cerr <<" }\n"; }

#define maxN 105
#define matrix_size 2
#define base 1000000007LL
#define eps 1e-8
#define TimeTo

using namespace std;
// template ends here
int F[maxN][maxN],a[maxN],b[maxN],m,n;

void yolosmile()
{
	cin >> m;
	FOR(i,1,m) cin >> a[i];
	cin >> n;
	FOR(i,1,n) cin >> b[i];
	sort(a+1,a+m+1);
	sort(b+1,b+n+1);
	// int cur1=1,cur2=1;
	FOR(i,1,m) 
	{
		FOR(j,1,n) 
		{
			if (abs(a[i]-b[j])<=1) F[i][j]=max(F[i][j],F[i-1][j-1]+1);
			else F[i][j]=max(F[i-1][j],F[i][j-1]);
		}
	}
	cout<<F[m][n];
}

int main()
{
	IOS;
	#ifdef TimeToLove
        freopen("test.inp","r",stdin);
        freopen("test.out","w",stdout);
        double startTime=clock();
	#endif // DEBUG
	
    yolosmile();

    #ifdef TimeToLove
    	double endTime=clock();
    	cerr<<"Execution time: "<<(endTime-startTime)/CLOCKS_PER_SEC*1000<<".ms\n";
    #endif
	
    return 0;
}
