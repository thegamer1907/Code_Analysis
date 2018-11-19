#include<bits/stdc++.h>

using namespace std;

#define inf (ll)1e15
#define ll long long
#define all(x) x.begin(), x.end()
#define x first
#define y second

typedef pair<int, int> Point;

const int mod = (int) 1e9 + 7;
const int mod2 = 998244353;

int a[100010];
int cnt[100010];
ll cost = 0;
int x, y;
ll dp[22][100010];

void dfs(int k, int l, int r, int optl, int optr){

	if(l > r)
		return;

	int mid = (l + r) / 2;

	int lf = min(mid, optr);

	while(y - 1 > mid){
		cnt[a[y - 1]]--;
		cost -= cnt[a[y - 1]];
		y--;
	}
	while(x > lf){
		cost += cnt[a[x]];
		cnt[a[x]]++;
		x--;	
	}

	while(y <= mid){
		cost += cnt[a[y]];
		cnt[a[y]]++;
		y++;
	}
	while(x < lf){
		cnt[a[x + 1]]--;
		cost -= cnt[a[x + 1]];
		x++;
	}
	
	// cout << l << " " << mid << " " << r << " " << optl << " " << optr << endl;
	// cout << x << " " << y << endl;
	// cout << cnt[1] << " " << cnt[2] << " " << cnt[3] << endl;
	// cout << cost << endl;

	// cout << "--------------" << endl;
  

	int opt_idx = optl;

	for(int i = lf; i >= optl; --i){
		cost += cnt[a[i]];
		cnt[a[i]]++;
		x--;
		if(dp[k - 1][i - 1] + cost < dp[k][mid]){
			dp[k][mid] = dp[k - 1][i - 1] + cost;
			opt_idx = i;
		}
	}

	dfs(k, l, mid - 1, optl, opt_idx);
	dfs(k, mid + 1, r, opt_idx, min(r, optr));	

	return;
}

int main(){

    cin.tie(0);
    cin.sync_with_stdio(0);

    #ifdef Cyborg101
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int N, K;
    cin >> N >> K;

    memset(dp, 0x7f, sizeof dp);

    x = 0, y = N + 1;
    // ]x,y[ interval *_*
    for(int i = 1; i <= N; ++i){
    	cin >> a[i];
    	cost += cnt[a[i]];
    	cnt[a[i]]++;
    	dp[1][i] = cost;
    }

    dp[0][0] = 0;
    for(int k = 2; k <= K; ++k){
    	dfs(k, 1, N, 1, N);
    }

    cout << dp[K][N] << endl;

    return 0;
}
