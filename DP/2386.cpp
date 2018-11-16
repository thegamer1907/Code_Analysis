#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3FLL
#define watch(x) clog << #x << " is " << x << endl
#define _ << ' ' <<
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())
#define st first
#define nd second
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int N = 200050;
int n, k, v[N], sum, ans, idx;

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
        if (i < k) sum += v[i];
    }
    ans = sum;
    for (int i = k, j = 0; i < n; ++i, ++j) {
        sum += v[i]-v[j];
        if (sum < ans) {
            ans = sum;
            idx = j+1;
        }
    }
    printf("%d\n", idx+1);
    return 0;
}
