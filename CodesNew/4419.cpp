#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <fstream>
#define ni(n) scanf("%d", &n)
#define nl(n) scanf("%I64d", &n)
#define nai(a,n) for (int i = 0; i < (n); i++) ni((a)[i])
#define nal(a,n) for (int i = 0; i < (n); i++) nl((a)[i])
#define case(t) printf("Case #%d: ", (t))
#define pii pair<int, int>
#define vii vector<pii>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long ll;
const double pi = acos(-1);
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const int MAXN = 5e5 + 5;
const double eps = 1e-9;
using namespace std;
string s[MAXN], res[MAXN];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> s[i];
        s[i].erase(s[i].begin());
    }
    res[0] = s[0];
    for (int i = 1; i < n; i++)
    {
        res[i] = "";
        int ind = 0;
        int l = min(s[i].length(), res[i - 1].length());
        for (int j = 0; j < l; j++)
        {
            if (s[i][j] == res[i - 1][j])
            {
                res[i] += s[i][j];
                ind++;
            }
            else
                break;
        }
        if (ind >= l)
            continue;
        if (res[i - 1][ind] > s[i][ind])
            res[i] += s[i].substr(ind);
        else
            continue;
    }
    for (int i = n - 1; i >= 0; i--)
        cout << "#" << res[i] << "\n";
    return 0;
}
