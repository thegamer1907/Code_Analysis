#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define MAXN 10001
#define pb push_back
#define mp make_pair
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, m;
vi a, b;
int memo[101][101];

int solve(int i, int j){
    if(i==n || j==m) return 0;
    if(memo[i][j]!=INF) return memo[i][j];
    int ans = max(solve(i+1, j), solve(i, j+1));
    if(abs(a[i]-b[j])<=1) ans = max(ans, solve(i+1, j+1)+1);
    return memo[i][j] = ans;
}

int main(){
    scanf("%d", &n);
    a.resize(n);
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    b.resize(m);
    for(int i=0;i<m;i++) scanf("%d", &b[i]);
    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    memset(memo, INF, sizeof memo);
    printf("%d\n", solve(0, 0));
}
