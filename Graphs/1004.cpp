#include <bits/stdc++.h>
#include<conio.h>
const int INF = INT_MAX;
const int MOD = 1000000007;
const double PI = acos(-1);
const long double E = 2.7182818284590452353602875;

#define FOR(i, n) for(int i = 0;i < (n);i++)
#define pb push_back

using ll = long long;
using ld = long double;
using namespace std;

void print(vector<int> &v)
{
    FOR(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

vector<bool> used(100500, false);

void dfs(vector<int> CC[], int b){
    used[b] = true;

    for(int i : CC[b]){
        if(!used[i]){
            dfs(CC, i);
        }
    }
}
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> CC[n];
    int a;

    for(int i = 0;i < n - 1;i++){
        cin >> a;
        CC[i].pb(i + a);
    }

    dfs(CC, 0);

    if(used[t - 1]) cout << "YES";
    else cout << "NO";

    return 0;
}
