#define fori(q, x) for(int q=0; q<x; q++)
#define forl(q, x) for(long q=0; q<x; q++)
#define forll(q, x) for(ll q=0; q<x; q++)
#define unsync ios::sync_with_stdio(0), cin.tie(0)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000 // 1 billion, safer than 2B for Floyd Warshall’s
#define MAX 100005

const double EPS = (1e-9);

// Common memset settings
//memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
//memset(arr, 0, sizeof arr); // to clear array of integers

int vis[MAX];
vector<int> vec; int N;
ll ans = 0;
bool found = false;

int p, q, r, s, t, u;

bool f(int x){
    int cnt = 1;
    for(int i = N - x - 1; i >= 0; i--){
        if(vec[i] * 2 > vec[N-cnt])
            return false;
        cnt++;
    }

    return true;
}

double BS_double(double start, double endd,double val) {
    while(fabs(endd - start) > EPS) {	// iterate 100-500 iteration
        double mid = start + (endd-start)/2;
        if(f(mid) > val)	start= mid;
        else 				endd  = mid;
        //cout << start << " " << endd << endl;
    }
    return start;
}

int BSfindFirst(int start, int endd) {
    int lastmid = -1;
	while(start < endd) {
		int mid = start + (endd-start)/2;
		if(mid == lastmid) break;
		else lastmid = mid;
		if(f(mid))		endd= mid;
		else if(!f(mid))	start  = mid+1;
		//else					endd  = mid;
		//cout << start << " " << endd << " " << mid << " " << f(mid) << endl;
	}
	return start;
}

void dfs(int u, vector<int> adj[]){
    vis[u]++;

    for(int v : adj[u])
        if(!vis[v])
            dfs(v, adj);
}


int main()
{
    unsync;
    #ifndef  ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    cin >> N;

    fori(i, N){
        int x; cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    cout << BSfindFirst(ceil(N/2.0), N);
}
