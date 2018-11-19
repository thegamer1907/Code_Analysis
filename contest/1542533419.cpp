#pragma comment(linker, "/STACK:102400000,102400000")

#include<bits/stdc++.h>

#define mst(a, b) memset(a, b, sizeof(a))
#define clr(a) mst(a, 0)
#define pb push_back
#define mp make_pair
#define sz(x) (int)x.size()
#define lowbit(x) (x&(-x))
#define fi first
#define se second
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define per(i, a, b) for(int i = (a); i >= (b); i--)
#define lt u << 1
#define rt u << 1 | 1

#define pr(x) cout << #x << " = " << x << " ";
#define prl(x) cout << #x << " = " << x << endl;

using namespace std;

template<typename T>
ostream& operator << (ostream & os, const vector<T>& v) {
		 for(int i = 0; i < v.size(); i++) os << v[i] << " ";
}

template<typename T>
ostream& operator << (ostream & os, const set<T>& v) {
		 for(typename set<T>::iterator it = v.begin(); it != v.end(); it++) os << *it << " ";
}

const int mod = 1e9 + 7;
const int N = 1e6 + 5;

typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> V;
typedef pair<int, int> P;
const ll INF = 1e12;

ll sum = 0;
int a[N];
int cnt[N];
ll dp[N][30];
int le = 1, ri = 0;
void query(int l, int r)
{
    while(ri < r){
        sum += 1LL*cnt[a[++ri]];
        cnt[a[ri]]++;
        //printf("ri:%d, sum:%I64d\n", ri, sum);
    }
    while(ri > r){
        cnt[a[ri]]--;
        sum -= 1LL*cnt[a[ri--]];
    }
    while(le > l){
        sum += 1LL*cnt[a[--le]];
        cnt[a[le]]++;
    }
    while(le < l){
        cnt[a[le]]--;
        sum -= 1LL*cnt[a[le++]];
    }
    //printf("query(%d,%d):%I64d\n", l, r, sum);
}
void solve(int L, int R, int l, int r, int k) {
	if(l > r) {
		return;
	}
	
	int mid = l + r >> 1;
	int p;
	for(int i = min(mid, R); i >= L; i--) {
		query(i, mid);
		
		if(dp[mid][k] > dp[i - 1][k - 1] + sum) {
			dp[mid][k] = dp[i - 1][k - 1] + sum;
			p = i;
		}
		
	} 
	solve(L, p, l, mid - 1, k);

	solve(p, R, mid + 1, r, k);

}
int main() {
	//freopen("a.in", "r", stdin);
	//freopen("a.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	rep(i, 1, n) {
		rep(j, 0, k) {
			dp[i][j] = INF;
		}
	}
	dp[0][0] = 0;
	rep(i, 1, n) {
		cin >> a[i];
	}
	rep(i, 1, k) {
		solve(1, n, 1, n, i);
	}
	cout << dp[n][k];
}