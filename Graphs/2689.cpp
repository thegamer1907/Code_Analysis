#include <bits/stdc++.h>

using namespace std;

#if 1
    #define pv(x) cout<<#x<<" = "<<x<<"; ";cout.flush()
    #define pn cout<<endl
#else
    #define pv(x)
    #define pn
#endif

#ifdef ONLINE_JUDGE
    #define in cin
    #define out cout
#else
    ifstream in("gauss.in");
    //ofstream out("gauss.out");
#endif

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
#define pb push_back
#define mp make_pair
const int NMax = 5e2 + 5;
const ll inf_ll = 1e18 + 5;
const int inf_int = 1e9 + 5;
const int mod = 100003;
const double eps = 1e-7;
using zint = int;

int dx[4] = {-1,1,0,0}, dy[4] = {0,0,-1,1};
char a[NMax][NMax];
bool vis[NMax][NMax];

void dfs(pair<int,int> node,int& nrLeft) {
    vis[node.first][node.second] = true;
    
    for (int k = 0;k < 4;++k) {
        int nx = node.first + dx[k],
            ny = node.second + dy[k];
        
        if (a[nx][ny] == 0 || a[nx][ny] == '#' || vis[nx][ny]) {
            continue;
        }
        
        dfs({nx,ny},nrLeft);
    }
    
    if (nrLeft) {
        a[node.first][node.second] = 'X';
        --nrLeft;
    }
}

int main() {
    int N,M,K;
    in >> N >> M >> K;
    
    pair<int,int> empty;
    for (int i = 1;i <= N;++i) {
        in >> (a[i]+1);
        
        for (int j = 1;j <= M;++j) {
            if (a[i][j] == '.') {
                empty = {i,j};
            }
        }
    }
    
    dfs(empty,K);
    
    for (int i = 1;i <= N;++i) {
        out << a[i]+1 << '\n';
    }
    
    return 0;
}

