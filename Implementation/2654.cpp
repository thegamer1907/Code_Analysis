#include <bits/stdc++.h>

#define maxN
#define matrix_size 2
#define base 1000000007LL
#define eps 1e-8

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
#define SIZE(x) ((int)x.size())
#define FOR(i,a,b) for (int i=(a); i<=(b); ++i)
#define REP(i,a,b) for (int i=(a); i<(b); ++i)
#define FORD(i,a,b) for (int i=(a); i>=(b); --i)
#define REPD(i,a,b) for (int i=(a); i>(b); --i)

using namespace std;
// template ends here

void yolosmile()
{
	ll n;
	cin >> n;
	ll tmp=n/2;
	if (n&1) tmp-=n;
	cout<<tmp;
}

int main()
{
	IOS;
	#ifdef DEBUG
        freopen("test.inp","r",stdin);
        freopen("test.out","w",stdout);
	#endif // DEBUG
	
    yolosmile();
	
    return 0;
}
