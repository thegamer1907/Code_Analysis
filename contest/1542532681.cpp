#include <bits/stdc++.h>

#define YOU using
#define DONT namespace
#define SAY std

YOU DONT SAY;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ll,int> pli;
typedef pair<int,ll> pil;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define REPP(i,a,b,d) for(int i=a;i<=b;i+=d)
#define REP(i,a,b) REPP(i,a,b,1)
#define REVV(i,a,b,d) for(int i=a;i>=b;i-=d)
#define REV(i,a,b) REVV(i,a,b,1)

#define FOR(i,a) for(int i=0; i<a; i++)
#define FORD(i,a) for(int i=(int)a-1; i>=0; i--)

#define mp make_pair

#define pb push_back
#define F first
#define S second

const int OO = 1e9;
const ll INF = 1e18;

const int irand(int lo,int hi){
	return ((double)rand()/(RAND_MAX + 1.0)) * (hi-lo+1) + lo;
}

const ll lrand(ll lo,ll hi){
	return ((double)rand()/(RAND_MAX + 1.0)) * (hi-lo+1) + lo;
}

#define getc getchar
template<typename T>
T getnum(){
	int sign = 1;
	T ret = 0;
	char c;

	do{
		c = getc();
	}while(c == ' ' || c == '\n');
	if(c == '-')sign = -1;
	else ret = c-'0';
	while(1){
		c = getc();
		if(c < '0' || c > '9')break;
		ret = 10*ret + c-'0';
	}
	return sign * ret;
}

inline void ini(int& x){
	x = getnum<int>();
}

inline void scani(int& x){
	scanf("%d",&x);
}

//end of macro

const int N = 2e5 + 5;
const int K = 25;

int n,k;
int arr[N];
ll dp[K][N];

int ql = 1, qr = 0;
int qcnt[N];
ll curr = 0;
ll query(int l, int r){
    while(qr < r){
        qr++;
        curr += qcnt[arr[qr]];
        qcnt[arr[qr]]++;
    }
    while(ql > l){
        ql--;
        curr += qcnt[arr[ql]];
        qcnt[arr[ql]]++;
    }
    while(qr > r){
        qcnt[arr[qr]]--;
        curr -= qcnt[arr[qr]];
        qr--;
    }
    while(ql < l){
        qcnt[arr[ql]]--;
        curr -= qcnt[arr[ql]];
        ql++;
    }
    return curr;
}

void dpdnc(int level){
    queue<pair<pii,pii> >q;
    q.push(mp(mp(1,n),mp(1,n)));
    while(!q.empty()){
        int l = q.front().F.F;
        int r = q.front().F.S;
        int bl = q.front().S.F;
        int br = q.front().S.S;
        q.pop();

        if(l > r)continue;

        int m = (l+r)/2;
        ll best = INF;
        int bm;
        REP(i,bl,min(m, br)){
            ll tmp = dp[level-1][i-1] + query(i,m);
            if(tmp < best){
                best = tmp;
                bm = i;
            }
        }
        dp[level][m] = best;
        q.push(mp(mp(l, m-1), mp(bl, bm)));
        q.push(mp(mp(m+1, r), mp(bm, br)));
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    REP(i,1,n)cin>>arr[i];

    REP(i,1,n)dp[0][i] = INF;
    dp[0][0] = 0;
    REP(i,1,k)dpdnc(i);
    cout << dp[k][n] << endl;

    return 0;
}
