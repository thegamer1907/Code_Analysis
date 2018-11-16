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
const int MAXN = 1e5 + 5;
const double eps = 1e-9;
using namespace std;
int a[MAXN], b[MAXN];
unordered_set<int> cur;

int main()
{
    int n, m, l;
    ni(n), ni(m);
    nai(a, n);
    b[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        b[i] = b[i + 1];
        if (cur.find(a[i]) == cur.end())
            b[i]++;
        cur.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        ni(l);
        printf("%d\n", b[--l]);
    }
    return 0;
}
