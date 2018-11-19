

#include<bits/stdc++.h>

#define mst(a, b) memset(a, b, sizeof(a))
#define clr(a) mst(a, 0)


#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define per(i, a, b) for(int i = (a); i >= (b); i--)

using namespace std;


const int mod = 1e9 + 7;
const int N = 1e5 + 10;


typedef long long ll;

const ll INF = 0x3f3f3f3f3f3f3f3f;

ll sum = 0;
int a[N];
int cnt[N];
ll dp[21][N];
int le = 1, ri = 0;
void query(int l, int r)
{
    while(ri < r){
        sum += 1LL*cnt[a[++ri]];
        cnt[a[ri]]++;
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
}
/*void solve(int L, int R, int l, int r, int k) {
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

}*/

void solve(int l, int r, int L, int R, int k)
{
    if(l > r) return;
    int m = l + r >> 1;
    int M, ed = min(R,m);
    for(int i = L; i <= ed; i++){
        query(i, m);
        if(dp[k - 1][i-1] + sum < dp[k][m]){
            dp[k][m] = dp[k - 1][i-1] + sum;
            M = i;
        }
    }
    solve(l,m-1,L,M, k);
    solve(m+1,r,M,R, k);
}


int main() {
	//freopen("a.in", "r", stdin);
	//freopen("a.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	mst(dp, INF);
	rep(i, 0, 20) {
		dp[i][0] = 0;
	}
	rep(i, 1, n) {
		cin >> a[i];
	}
	rep(i, 1, k) {
		solve(1, n, 1, n, i);
	}
	cout << dp[k][n];
}

