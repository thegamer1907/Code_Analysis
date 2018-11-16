// #{{{
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define LL long long
#define LDB long double
#define MS0(I) memset(I, 0, sizeof(I));
#define MS1(I) memset(I, -1, sizeof(I));
#define F(n) FI(i,n)
#define FI(i,n) FL(i,0,n)
#define FL(i,l,n) for(int i=l;i<n;++i)
#define RDI(A) int A; scanf("%d", &A);
#define RDII(A, B) int A, B; scanf("%d %d", &A, &B);
#define RDIII(A, B, C) int A, B, C; scanf("%d %d %d", &A, &B, &C);
#define RDL(A) ll A; scanf("%lld", &A);
#define RDLL(A, B) ll A, B; scanf("%lld %lld", &A, &B);
#define RDLLL(A, B, C) ll A, B, C; scanf("%lld %lld %lld", &A, &B, &C);
#define SZ(X) ((int)X.size() )
#define ALL(I) (I).begin(), (I).end()
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define X first
#define Y second
// #}}}
const double pi = acos(-1.0);
const double eps = 1e-9;
#define MAXN 100005
#define mod 1000000007
#define type int
//#{{{
typedef pair<type,type> Pt;
typedef pair<Pt,Pt> Line;
Pt operator+(const Pt& p1,const Pt& p2){
	return Pt(p1.X+p2.X,p1.Y+p2.Y);
}
Pt operator-(const Pt& p1,const Pt& p2){
	return Pt(p1.X-p2.X,p1.Y-p2.Y);
}
type operator*(const Pt& p1,const Pt& p2){
	return (p1.X*p2.X+p1.Y*p2.Y);
}
type operator^(const Pt& p1,const Pt& p2){
	return (p1.X*p2.Y-p1.Y*p2.X);
}
//#}}}
 
char a[1000005];
char b[1000005];
int main(){
	RDI(n);
	cin >> a >> b;
	int ans = 0;
	FI(i,n) {
		if (a[i] != b[i]) {
			if ( a[i] == b[i+1] && a[i+1] == b[i]) {
				ans += 1;
				i++;
			} else {
				ans += 1;
			} 
		}
	}
	cout << ans;
	return 0;
}

