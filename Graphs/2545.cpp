#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
#include <queue>
#include <set>
#include <string>

#define int long long
#define For(i,z) for(int i=0;i<z;i++)

using namespace std;

const long long MAX = 1e18;
const int N = 1e4 + 10;

vector <int> gr[N];
int clr[N];

int dfs(int v) {
    int ans = 0;
    For (i, gr[v].size())
        ans += (clr[gr[v][i]] != clr[v]) + dfs(gr[v][i]);
    return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    For (i, n-1) {
        int a; cin >> a;
        gr[a-1].push_back(i+1);
    }


    For (i, n)
        cin >> clr[i];

    cout << 1 + dfs(0);

    return 0;
}
