#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <string>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <bitset>
#include <queue>
#include <sstream>
#include <chrono>
#include <numeric>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define mp make_pair
#define pb push_back
#define rep(i,n,m) for(int i=n; i<m; i++)
#define per(i,n,m) for(int i=n; i>m; i--)
#define fi first
#define se second
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))

#define fast_read ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef vector<vi> vvi;

const ll INF=1e9;

using namespace std;

int a[101];

void solution() {
    int n;cin>>n;

    rep(i,1,n+1) {
		cin>>a[i];
		a[i]=a[i-1]+a[i];
	}

	int ans=0;

	rep(i,1,n+1) {
		rep(j,i,n+1){
			ans=max(ans, a[i-1]+(j-i+1-(a[j]-a[i-1]))+a[n]-a[j]);
		}
	}

    cout<<ans<<endl;
}

int main() {
    fast_read;

    solution();

    return 0;
}
