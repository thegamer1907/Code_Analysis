#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <stack>
#include <map>
#include <queue>
#include <cstdio>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
#define INF 1000000001
#define LLINF 1000000000000000001
#define INPUT "input.txt"
#define OUTPUT "output.txt"

vector<vi> g,d;
vi a;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen(INPUT,"r",stdin);
    //freopen(OUTPUT,"w",stdout);
    int n,m,k;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        g.pb(vi(m,0));
        d.pb(vi(m,0));
        for (int j=0;j<m;j++) cin >> g[i][j];
    }
    g.pb(vi(m,0));
    for (int i=n-1;i>=0;i--) for (int j=0;j<m;j++){
        if (g[i][j]<=g[i+1][j]) d[i][j]=d[i+1][j]+1;
        else d[i][j]=1;
    }
    a.resize(n);
    for (int i=0;i<n;i++){
        a[i]=0;
        for (int j=0;j<m;j++) a[i]=max(a[i],d[i][j]);
    }
    cin >> k;
    while (k--){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        if (l+a[l]>r) cout << "Yes\n";
        else cout << "No\n";
    }
}