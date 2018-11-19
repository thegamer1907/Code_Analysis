#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
const int M = 100, N = 6;
bool a[M];
vector<int> v;
int n, k;
bool check(int cnt, vector<int> t) {
        for(int i = 0; i < k; i++) {
                if(t[i] > cnt / 2) return 0;
        }
        return 1;
}
void solve(int i, int cnt, vector<int> t) {
        if(cnt && check(cnt, t)) {
                cout << "YES";
                exit(0);
        }
        if(i == v.size()) return;
        vector<int> alt = t;
        for(int j = 0; j < k; j++)
                alt[j] += (((1 << j) & v[i]) > 0);
        solve(i + 1, cnt + 1, alt);
        solve(i + 1, cnt, t);
}
int main()
{
        scanf("%d %d", &n, &k);
        for(int i = 0; i < n; i++) {
                int mask = 0;
                for(int j = 0; j < k; j++) {
                        int a;
                        scanf("%d", &a);
                        if(a)
                                mask |= (1 << j);
                }
                if(!a[mask])
                        v.pb(mask);
                a[mask] = 1;
        }
        vector<int> t;
        t.resize(k);
        solve(0, 0, t);
        cout << "NO";
        return 0;
}
