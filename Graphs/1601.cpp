#include <bits/stdc++.h>
#include <utility>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int,int>> piii;
typedef pair<long long, long long> pll;
#define FOR(i, init, n) for(int i = init; i < n; i++)
#define RFOR(i, init, end) for(int i = end-1; i >= init; i--)
#define IN(a) cin >> a
#define IN2(a,b) cin >> a >> b
#define IN3(a,b,c) cin >> a >> b >> c
#define F first
#define S second
#define INF (1LL<<61)
#define FIN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB(a) push_back(a)
#define MK(a,b) make_pair(a,b)
#define printmatrix(n,m,matrix) FOR(i,0,n){FOR(j,0,m){cout << matrix[i][j] << " ";}cout << endl;}
#define printarray(n,arr) FOR(i,0,n)cout << arr[i] << " ";cout << endl;
#define printgraph(graph, n) FOR(i,0,n){cout << endl << "Nodo: " << i << endl; if(graph[i].size()) cout << "Vecinos: ";for(auto x : graph[i]){cout << x << " ";}}

const int MAXN = 3e4+3;
int n, t, aux;
vector<int> graph[MAXN];
bool visited[MAXN];
 
void dfs(int pos) {
	visited[pos]=1;
    if(pos == t) {
        cout << "YES";
        exit(0);
    }
	FOR(i,0,graph[pos].size())
		if (!visited[graph[pos][i]])
			dfs(graph[pos][i]);
}

int main() {
	IN2(n,t);
    t--;
    FOR(i, 0, n-1) {
        IN(aux);
        graph[i].PB(i+aux);
    }
    dfs(0);
    cout << "NO";
}
