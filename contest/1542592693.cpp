#include <bits/stdc++.h>

#define Pi acos(-1.)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pii pair<int, int>
#define FILE "knapsack"
#define standart 1

using namespace std;

typedef long long ll;

const int INF = 1e9;
const ll LINF = 4e18;
const int MAXN = 1e5 + 228;
const int MOD = 1e9 + 7;
const double eps = 1e-14;

string a[MAXN];
string ans = "NO";

void solve()
{
    string s; cin >> s;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            string s1 = a[i], s2 = a[j];
            if(s1 == s || s2 == s)
                ans = "YES";
            string cur1 = s1 + s2;
            string cur2 = s2 + s1;
            for(int k = 1; k < 4; k++)
            {
                if(cur1[k-1] == s[0] && cur1[k] == s[1])
                    ans = "YES";
                if(cur2[k-1] == s[0] && cur2[k] == s[1])
                    ans = "YES";
            }
        }
    }
    cout << ans;


}

int main()
{
    if(!standart)
    {
        freopen(FILE".in", "r", stdin);
        freopen(FILE".out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    while(t--)
        solve();

    return 0;
}
