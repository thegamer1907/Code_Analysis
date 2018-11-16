/*
 ID: bradyawn
 PROG: contest
 LANG: C++11
 */

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <vector>
#include <deque>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <utility>
#include <set>
#include <unordered_set>
#include <ctime>
#include <queue>
#include <stack>
#include <bitset>
#include <random>
#include <cstring>
#include <functional>

using namespace std;

typedef long long ll;
typedef pair<int,int> i2;
typedef pair<ll,ll> ll2;

int n;

int mx = 1;

vector<int> adj[2001];
int par[2001];

void dfs(int cur, int dep)
{
    mx = max(mx, dep);
    for (auto e : adj[cur]) dfs(e, dep+1);
}

int main()
{
    //ifstream inf("");
    //ofstream outf("");
    //cout << setprecision(10);
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        par[i] = a;
        if (a != -1) adj[a].push_back(i);
    }
    
    for (int i = 1; i <= n; i++)
        if (par[i] == -1) dfs(i, 1);

    cout << mx << '\n';
    
    return 0;
    
}


