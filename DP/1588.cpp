#include<bits/stdc++.h>
using namespace std;
#define eps 1e-9
#define For(i,a,b) for(int i=a;i<=b;i++)
#define Fore(i,a,b) for(int i=a;i>=b;i--)
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define mkp make_pair
#define pb push_back
#define siz size()
#define met(a,b) memset(a,b,sizeof(a))
#define iossy ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define fr freopen
#define pi acos(-1.0)
#define Vector Point
#define fir first
#define sec second
#define endl '\n'
typedef pair<int,int> pii;
typedef unsigned long long ull;
const long long linf=1LL<<62;
const int iinf=1000000009;
const double dinf=1e15;
const int Mod=1e9+9;
typedef long long ll;
typedef long double ld;
struct Point {
	ll x,y,id;
	Point() {}
	Point(ll x,ll y) : x(x),y(y) {}
	Point operator - (const Point &a)const { return Point(x-a.x,y-a.y); }
	bool operator < (const Point &a)const { if(x==a.x) return y<a.y; return x<a.x; }
};
ull qpow(ull a,ull b) {
	ull ans=1;
	while(b){
		if(b&1) ans=ans*a;
		b>>=1;a=a*a;
	}
	return ans;
}
int ans[20000];
struct AC_Automata {
    #define N 210*150
    #define M 150
    int ch[N][M], sz,cnt;
    int val[N], last[N], f[N], cc[N];
    void clear() { sz = 1; cnt=0;memset(ch[0], 0, sizeof(ch[0])); }
    int idx(char c) { return c; }
    void insert(char *s,int l,int v) {
        int u = 0;
        for (int i=0;i<l; i++) {
            int c = idx(s[i]);
            if (!ch[u][c]) {
                memset(ch[sz], 0, sizeof(ch[sz]));
                val[sz] = cc[sz] = 0;
                ch[u][c] = sz++;
            }
            u = ch[u][c];
        }
		val[u]=v;
    }
    void build() {
        queue<int> q;
        f[0] = 0;
        for (int c=0; c<M; c++) {
            int u = ch[0][c];
            if (u) { f[u] = 0, q.push(u); last[u] = 0; }
        }
        while (!q.empty()) {
            int r = q.front(); q.pop();
            for (int c=0; c<M; c++) {
                int u = ch[r][c];
                if (!u) { ch[r][c] = ch[f[r]][c]; continue; }
                q.push(u);
                int v = f[r];
                f[u] = ch[v][c];
                last[u] = val[f[u]] ? f[u] : last[f[u]];
            }
        }
    }
    int find(char *s,int l) {
        int j = 0;cnt=0;
        for (int i=0; i<l; i++) {
            int c = idx(s[i]);
            j = ch[j][c];
            if (val[j]) print(j);
            else if (last[j]) print(last[j]);
        }
    }
    void print(int j) { 
        if (j) {
			if(val[j]) ans[val[j]]++;
			print(last[j]);
        }
    }
} ;
char s[200005];
bool vis[200005];
void solve(){
	cin>>s;met(vis,0);
	int l=strlen(s),mk=0;
	for(int i=0;i<l-1;i++) {
		if(s[i]=='A' && s[i+1]=='B') vis[i]=1,vis[i+1]=1,mk++;
	}
	For(i,0,l-2) {
		if(s[i]=='B' && s[i+1]=='A') {
			if(mk-vis[i]-vis[i+1]>0){ cout<<"YES"<<endl;return ;}
		}
	}
	cout<<"NO"<<endl;
}
int main(){
	int t=1;
//	For(i,1,t) printf("Case #%d:\n",i),solve();
	solve();
	return 0;
}
