#include <bits/stdc++.h>

using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define f_in freopen("test.in","r",stdin);
#define f_out freopen("test.in","w",stdout);
#define debug(x) cerr << #x << " : " << x << "\n";
#define _ cin.sync_with_stdio(0); cin.tie(0);
#define tl cout <<"\nTime elapsed: "<<(1000 * clock() / CLOCKS_PER_SEC)<<"ms\n"


typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;

inline char nc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}

template<typename T = int>
inline T nxt(){
    char c=nc();T x=0; int f=1;
    for(;c>'9'||c<'0';c=nc())if(c=='-')f=-1;
    for(;c>='0'&&c<='9';x=x*10+c-'0',c=nc()); x*=f;
    return x;
}

const int MAX_PR = 10000010;
bitset<MAX_PR> isprime;
vi eratosthenes_sieve(int lim) {
	isprime.set(); isprime[0] = isprime[1] = 0;
	for (int i = 4; i < lim; i += 2) isprime[i] = 0;
	for (int i = 3; i*i < lim; i += 2) if (isprime[i])
		for (int j = i*i; j < lim; j += i*2) isprime[j] = 0;
	vi pr;
	rep(i,2,lim) if (isprime[i]) pr.push_back(i);
	return pr;
}

int cnt[MAX_PR],f[MAX_PR];

int main(){
#ifndef ONLINE_JUDGE
    f_in
#else
    _
#endif
    vi primes = eratosthenes_sieve(MAX_PR);
    memset(cnt, 0, sizeof cnt);
    memset(f, 0, sizeof cnt);
    int n = nxt();
    rep(i,0,n) cnt[nxt()]++;
    trav(p, primes){
        for(int i = p;i<MAX_PR;i+=p) f[p] += cnt[i];
    }
    rep(i,1,MAX_PR) f[i] += f[i-1];
    int m = nxt();
    while(m--){
        int l = min(MAX_PR-1, nxt()-1), r = min(nxt(), MAX_PR-1);
        cout << f[r] - f[l] << '\n';
    }
}
