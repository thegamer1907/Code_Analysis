#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define fi first
#define se second
#define mp make_pair
#define SZ(x) ((int)(x.size()))
#define FOI(i,a,n) for(int (i)=int(a);(i)<=int(n);++(i))
#define FOD(i,a,n) for(int (i)=int(a);(i)>=int(n);--(i))
#define IN(x,y) ((y).find((x))!=(y).end())
#define ALL(t) t.begin(),t.end()
#define MSET(tabl,i) memset(tabl, i, sizeof(tabl))
#define PSET(x,y) fixed<<setprecision(y)<<lf(x)
#define DBG(c) cout<<#c<<" = "<<c<<endl;
#define RTIME ((double)clock()/(double)CLOCKS_PER_SEC)

template<typename T,typename S>inline bool REMIN(T&a,const S&b){return a>b?a=b,1:0;}
template<typename T,typename S>inline bool REMAX(T&a,const S&b){return a<b?a=b,1:0;}

typedef long long ll;
typedef long double lf;
typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef vector<int> vi;

int bit(ll x, int pos){ return (x >> pos) & 1; }
ll power(ll base, ll exp, ll c = 1e9 + 7) { if(!exp) return 1; ll r = power(base, exp >> 1, c); r=(r*r)%c; if(exp&1) r=(r*base)%c; return r; }

ll T,N,K;  
int a,b,c;
string s1,s2;

const lf PI = 2*acos(0);
const ll INF = 1e9 + 4;
const ll MOD = 1000000007;
const int NMAX = 3e5+5;

lf H, M, S, T1, T2;

void check() {
	lf y1 = T1, y2 = T2;
	if(T1 > T2) {
		swap(y1, y2);
	}
	if(not (y1 <= H and H <= y2 or y1 <= M and M <= y2 or y1 <= S and S <= y2)){
				
		cout << "YES";
		exit(0);
	}
	if(not ((y1 >= H or H >= y2) or (y1 >= M or M >= y2) or (y1 >= S or S >= y2))) {

		cout << "YES";
		exit(0);
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	cin >> H >> M >> S >> T1 >> T2;
	H /= 12;
	H += M / 60 / 12 + S / 3600 / 12;
	M /= 60;
	M += S / 60 / 60;
	S /= 60;
	T1 /= 12;
	T2 /= 12;
			if(S >= 1) S -= 1;
		if(M >= 1) M -= 1;
		if(H >= 1) H -= 1;

	check();
	lf st = S;
	S += 0.000002;
		
	while(fabs(S - st) > 0.00001) {
		if(fabs(S - T1) <= 0.00001 or fabs(M - T1) <= 0.00001 or fabs(H - T1) <= 0.00001) {
			cout << "NO";
			exit(0);
		}
		S += 0.000001;
		M += 0.000001/60;
		H += 0.000001/3600;
		check();
	}
	cout << "NO";
				
	return 0;
}
