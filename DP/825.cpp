#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fx first
#define sx second
#define fori(a,b) for(int i=a;i<b;i++)

using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<int ,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<pii>  vpii;
typedef priority_queue<ll,vll> pq;
typedef priority_queue<ll,vll, greater <ll> > pqi;
typedef priority_queue<pll,vpll,greater<pll> > pqd;
typedef vector<vpll> vvpll;
typedef vector<vll> vvll;

ll const INF = 1e9+42;
ll const MOD = 1e9+7;
ld const EPS = 1e-9;

template <typename t> void read(t &a);
template <typename t, typename t1> void read(pair<t,t1> &p);
template <typename t> void read(vector<t> &V);
template <typename t> void read(deque<t> &D);
template <typename t> void read(vector<t> &V,ll dim);
template <typename t> void read(deque<t> &D,ll dim);
template <typename t> void read(set<t> &S,ll dim);
template <typename t> void read(multiset<t> &M, ll dim);
template <typename t> void read(priority_queue<t, vector<t> > &P, ll dim);
template <typename t> void read(priority_queue<t, vector<t>, greater<t> > &P, ll dim);

template <typename t> void print(t a);
template <typename t, typename t1> void print(pair<t,t1> p);
template <typename t> void print(vector<t> &V);
template <typename t> void print(deque<t> &D);
template <typename t> void print(set<t> &S);
template <typename t> void print(multiset<t> &M);
template <typename t> void print(priority_queue<t, vector<t> > &P);
template <typename t> void print(priority_queue<t, vector<t>, greater<t> > &P);

template<typename t> t GCD(t a, t b);
template<typename t> t LCM(t a, t b);
template<typename t> t abs(t a, t b);
template<typename t> t abs(t a);
int max(int a, int b);
double max(double a, double b);
ld max(ld a, ld b);
ll max(ll a, ll b);
int min(int a, int b);
double min(double a, double b);
ld min(ld a, ld b);
ll min(ll a, ll b);
vector<ll> StringToVector(string s);
vector<int> StringToVectorInt(string s);
template<typename t> string NumberToString(t number);
ll StringToNumber(string s);
int StringToNumberInt(string s);

template <typename t> void read(t &a) {cin>>a; return;}
template <typename t, typename t1> void read(pair<t,t1> &p) {t c1; t1 c2; read(c1), read(c2); p.first=c1; p.second=c2; return;} 
template <typename t> void read(vector<t> &V) {ll dim=V.size();for(int i=0;i<dim;i++){t tmp; read(tmp); V[i]=tmp;} return;}
template <typename t> void read(deque<t> &D) {ll dim=D.size();for(int i=0;i<dim;i++){t tmp; read(tmp); D[i]=tmp;} return;}
template <typename t> void read(vector<t> &V, ll dim) {for(int i=0;i<dim;i++){t tmp; read(tmp); V.push_back(tmp);} return;}
template <typename t> void read(deque<t> &D, ll dim) {for(int i=0;i<dim;i++){t tmp; read(tmp); D.push_back(tmp);}return;}
template <typename t> void read(set<t> &S,ll dim) {for(int i=0;i<dim;i++){t tmp; read(tmp); S.insert(tmp);}return;}
template <typename t> void read(multiset<t> &M, ll dim) {for(int i=0;i<dim;i++){t tmp; read(tmp); M.insert(tmp);}return;}
template <typename t> void read(priority_queue<t, vector<t> > &P, ll dim){for(int i=0;i<dim;i++){t tmp; read(tmp); P.push(tmp);}return;}
template <typename t> void read(priority_queue<t, vector<t>, greater<t> > &P, ll dim){for(int i=0;i<dim;i++){t tmp; read(tmp); P.push(tmp);}return;}

template <typename t> void print(t a) {cout<<a<<" ";}
template <typename t, typename t1> void print(pair<t,t1> p) {print(p.first); print(p.second); cout<<"\n";}
template <typename t> void print(vector<t> &V) {ll dim=V.size(); for(ll i=0;i<dim;i++) print(V[i]); cout<<"\n"; return;}
template <typename t> void print(deque<t> &D) {ll dim=D.size(); for(ll i=0;i<dim;i++) print(D[i]); cout<<"\n"; return ;}
template <typename t> void print(set<t> &S) {typename set<t>::iterator it; for(it=S.begin();it!=S.end();++it){t tmp=*it; print(tmp);} cout<<"\n";return;}
template <typename t> void print(multiset<t> &M) {typename multiset<t>::iterator it; for(it=M.begin();it!=M.end();++it){t tmp=*it; print(tmp);} cout<<"\n";return;}
template <typename t> void print(priority_queue<t, vector<t> > &P){vector<t> tmp;while(P.size()>0){tmp.pb(P.top());P.pop();}print(tmp);ll dim=tmp.size();for(int i=0;i<dim;i++) P.push(tmp[i]);return;}
template <typename t> void print(priority_queue<t, vector<t>, greater<t> > &P){vector<t> tmp;while(P.size()>0){tmp.pb(P.top());P.pop();}print(tmp);ll dim=tmp.size();for(int i=0;i<dim;i++) P.push(tmp[i]);return;}

template<typename Arg,typename ...Args>
void print(const Arg& arg,const Args&... args){print(arg);print(args...);}
template<typename Arg,typename ...Args>
void read(Arg& arg,Args&... args){read(arg);read(args...);}
#ifdef EVAL
ifstream in("input.txt");
ofstream out("output.txt");
#define cin in
#define cout out
#endif
template<typename t> t GCD(t a, t b){if(b==0) return a; return GCD(b,a%b);}
template<typename t> t LCM(t a, t b){return ((a*b)/(GCD(a,b)));}
template<typename t> t abs(t a, t b){if(a>b) return a-b; return b-a;}
template<typename t> t abs(t a){if(a>0) return a; return (a*(-1));}
int max(int a, int b){if(a>b)return a; return b;}
double max(double a, double b){if(a>b) return a; return b;}
ld max(ld a, ld b){if(a>b)return a; return b;}
ll max(ll a, ll b){if(a>b)return a; return b;}
int min(int a, int b){if(a<b) return a; return b;}
double min(double a, double b){if(a<b) return a; return b;}
ld min(ld a, ld b){if(a<b) return a; return b;}
ll min(ll a, ll b){if(a<b) return a; return b;}
vector<ll> StringToVector(string s){vector<ll> V;ll dim=s.size();for(int i=0;i<dim;i++){ll number=ll(s[i]-'0');V.push_back(number);}return V;}
vector<int> StringToVectorInt(string s){vector<int> V;ll dim=s.size();for(int i=0;i<dim;i++){int number=int(s[i]-'0');V.push_back(number);}return V;}
template<typename t> string NumberToString(t number){ostringstream ss;ss<<number;return ss.str();}
ll StringToNumber(string s){stringstream stream(s);ll x=0;stream>>x;return x;}
int StringToNumberInt(string s){stringstream stream(s);int x=0;stream>>x;return x;}

/*/\/\/\/\/\/\/\/\/\/\/\/\/\
/\/\/\/\/\TEMPLATE/\/\/\/\/\
/\/\/\/\/\/\/\/\/\/\/\/\/\*/
int const MAXN=101;
int ucc[MAXN][MAXN];
int main()
{
	int n, sol=0, one=0;
	read(n);
	vii V(n);
	read(V);
	for(auto x : V) one=(x==1)?one+1:one;
	if(one==n){
		print(n-1);
		return 0;
	}
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++){
			if(i==j) ucc[i][j]=(V[i]==0)?1:0;
			else{
				ucc[i][j]=(V[j]==0)?ucc[i][j-1]+1:ucc[i][j-1]-1;
			}
			sol=max(sol,ucc[i][j]);
		}
	print(sol+one);
	return 0;
}