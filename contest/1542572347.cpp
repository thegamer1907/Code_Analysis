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

ll T,N,M,K;  
int a,b,c;
string s1,s2;

const lf PI = 2*acos(0);
const ll INF = 1e9 + 4;
const ll MOD = 1000000007;
const int NMAX = 3e5+5;

vector<string> v;
int stor[2000];

string s, p;
int kmpuse[NMAX];

void KMPpre(){
	kmpuse[0] = -1; 
	int j = -1;
	FOI(i, 0, p.length()-1){
		while(j >= 0 && p[i] != p[j])
			j = kmpuse[j];
		kmpuse[1+i] = ++j;
	}
}

bool KMPsea(){
	int j = 0;
	FOI(i, 0, s.length()){
		while(j >= 0 && s[i] != p[j])
			j = kmpuse[j];
		if(++j == p.length()){
			//string at 1+i-j
			return 1;
			j = kmpuse[j];
		}
	}
	return 0;
}

int calc(int ind) {
	if(stor[ind] != -1) return stor[ind];
	int x = -1, l = v[ind - 1].length();
	while(l) {
		x ++;
		l >>= 1;
	}
	FOD(i, x, 1) {
		int don = 1;
		FOI(m, 0, (1 << i) - 1) {
			int fl = 0;
			s = v[ind - 1], p = "";
			FOI(k, 0, i - 1) {
				p += (bit(m, k) ? "1" : "0");
			}
			KMPpre();
			if(KMPsea()) {
				fl = 1;
			}
			if(!fl) {
				don = 0;
				break;
			}
		}
		if(don) {
			return stor[ind] = i;
		}
	}
	return stor[ind] = 0;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	cin >> N;
	FOI(i, 1, N) {
		cin >> s1;
		v.pb(s1);
	}
	MSET(stor, -1);
	cin >> M;
	FOI(i, 1, M) {
		cin >> a >> b;
		v.pb(v[a - 1] + v[b - 1]);
		if(v[a - 1].length() + v[b - 1].length() < 2000) {
			calc(N + i);
		}
		else {
			int temp = max(calc(a), calc(b));
			calc(N + i);
			REMAX(stor[N + i], temp);
			v[N + i - 1] = v[a - 1].substr(0, min(1000, (int)v[a - 1].length())) + "a" + 
				v[b - 1].substr(max(0, (int)v[b - 1].length() - 1000), 1000);
		}
		cout << calc(N + i) << endl;
	}
	return 0;
}
