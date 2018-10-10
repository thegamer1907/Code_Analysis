#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
const int N = 100000 + 5;
const int inf = 0x3f3f3f3f;
int T;
int n, m;
vector<int> a[N], f[N];
int mi[N];

int main() {
    scanf("%d%d", &n, &m);
    a[0] = f[0] = vector<int>(m+1, 0);
    for(int i = 1; i <= n; i++) {
        a[i].push_back(0);
        f[i].push_back(0);
        for(int j = 1; j <= m; j++) {
            int x;
            scanf("%d", &x);
            a[i].push_back(x);
            if(x >= a[i-1][j]) f[i].push_back(f[i-1][j]);
            else f[i].push_back(i);
        }
        mi[i] = *min_element(f[i].begin()+1, f[i].end());
    }
    int q;
    scanf("%d", &q);
    while(q--) {
        int l, r;
        scanf("%d%d", &l, &r);
        puts(mi[r] <= l ? "Yes" : "No");
    }
	return 0;
}
