#include <bits/stdc++.h>
#define PI acos(-1.0)
#define mem(a,b) memset((a),b,sizeof(a))
#define TS printf("!!!\n")
#define pb push_back
#define inf 0x3f3f3f3f
//std::ios::sync_with_stdio(false);
using namespace std;
//priority_queue<int,vector<int>,greater<int>> que; get min
const double eps = 1.0e-10;
const double EPS = 1.0e-4;
typedef pair<int, int> pairint;
typedef long long ll;
typedef unsigned long long ull;
//const int maxn = 3e5 + 10;
const int turn[4][2] = {{0, 1}, { 1, 0}, { 0, -1}, { -1, 0}};
//priority_queue<int, vector<int>, less<int>> que;
//next_permutation
int n;
vector<int> tree[10005];
int anser = 0;
int color[10005];
int aim[10005];
void dfs(int x, int now)
{
        if (now != aim[x])
        {
                anser++;
                now = aim[x];
        }
        int len = tree[x].size();
        for (int i = 0; i < len; i++)
        {
                int to = tree[x][i];
                dfs(to, now);
        }
}
int main()
{
        //freopen("out.txt","w",stdout);
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
                int now;
                cin >> now;
                tree[now].pb(i);
        }
        for (int i = 1; i <= n; i++)
        {
                cin >> aim[i];
        }
        dfs(1, 0);
        cout << anser << endl;
        return 0;
}
