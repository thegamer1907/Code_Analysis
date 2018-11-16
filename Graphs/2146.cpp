#include <bits/stdc++.h>
using namespace std;
#define INF 100000005
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define endl '\n'
#define PI 3.14159265358979323846
#define all(v) (v).begin(), (v).end()
#define mem(arr,val) memset(arr,val,sizeof arr)
#define sz(c) ((int)c.size())
#define ff first
#define ss second
#define EPS 1E-9
#define debug(s) cout<< #s <<" = "<< s <<endl
#define debugarr(arr, n) cout<< #arr << " = "; for(int i = 0; i < n; i++) {cout<<arr[i]<<" \n"[i == n - 1]; }
#define debugc(c) cout << #c << " = "; for(auto x : c) cout<<x<<" "; cout << endl
const int maxN = 1e6+5, MOD = 1e9+7, eps = 1e-7;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

ll x[maxN], y[maxN];

ll n, m, k;

int a,b;

int dist[maxN];

void bfs(int src){
    memset(dist, -1, sizeof dist);
    queue<int> Q;
    Q.push(src);
    dist[src] = 0;
    while(Q.size()){
        int aux = Q.front(); Q.pop();
        //debug(aux);
        if(dist[aux*2] == -1){
            dist[aux*2] = dist[aux] + 1;
            Q.push(aux*2);
            if(aux*2 == b) return;
        }

        if(dist[aux-1] == -1){
            dist[aux-1] = dist[aux]+1;
            Q.push(aux-1);
            if(aux-1 == b) return;
        }



    }
}



int main() {
    //ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);


    cin >> a >> b;

    bfs(a);
    cout << dist[b] << endl;


    return 0;
}
