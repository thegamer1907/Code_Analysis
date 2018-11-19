#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <iterator>
#include <set>
#include <cmath>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long LL;
const int maxn = 1000010;
const LL INF = 100000000000000LL;
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define FOR for(int i=1;i<=n;i++)

set<int> st[222][17];
int pre[222][17], dra[222][17];

string s[222];

void solve() {
    memset(pre, -1, sizeof(pre));
    memset(dra, -1, sizeof(dra));
    int n;
    cin >> n;
    FOR cin >> s[i];
    FOR {
        int sum;
        for(int j = 0;j < s[i].size();j++) {
            sum = 0;
            for(int len = 0;len < 15 && j + len < s[i].size();len++) {
                sum = (sum << 1) + (s[i][j + len] - '0');
                st[i][len + 1].insert(sum);
                if(j == 0) pre[i][len + 1] = sum;
            }
            //if(j == 0) cout << endl;
        }
        sum = 0;
        for(int j = s[i].size() - 1;s[i].size() - j <= 15 && j >= 0;j--) {
            sum += (s[i][j] - '0') << (s[i].size() - j - 1);
            dra[i][s[i].size() - j] = sum;
        }
    }
    int m;
    cin >> m;
    for(int i = 1, ai, bi;i <= m;i++) {
        int ci = i + n;
        scanf("%d %d", &ai, &bi);
        for(int j = 1;j <= 15;j++) {
            set_union(st[ai][j].begin(), st[ai][j].end(), st[bi][j].begin(), st[bi][j].end(), inserter(st[ci][j], st[ci][j].begin()));
        }
        for(int j = 1, k = 1, maxx = 0;j <= 15;j++) {
            if(pre[ai][j] != -1) {
                pre[ci][j] = pre[ai][j];
                maxx = j;
            }
            else if(pre[bi][k] != -1) {
                pre[ci][j] = (pre[ai][maxx] << k) + pre[bi][k]; ++k;
            }
        }
        for(int j = 1, k = 1, maxx = 0;j <= 15;j++) {
            if(dra[bi][j] != -1) {
                dra[ci][j] = dra[bi][j];
                maxx = j;
            }
            else if(dra[ai][k] != -1) {
                dra[ci][j] = (dra[ai][k++] << maxx) + dra[ci][maxx];
            }
        }
        for(int j = 1;j <= 14;j++) {
            if(dra[ai][j] == -1) break;
            for(int k = 1;k + j <= 15;k++) {
                if(pre[bi][k] == -1) break;
                st[ci][j + k].insert((dra[ai][j] << k) + pre[bi][k]);
            }
        }
        int ans = 0;
        for(int j = 1;j <= 15;j++) {
            //cout << pre[ci][j] << " ";
            //cout << st[ci][j].size() << " ";
            if(st[ci][j].size() == (1 << j)) ans = j;
        }
       // cout << endl;
        cout << ans << endl;
    }
    //for(set<int> :: iterator it = st[6][2].begin();it != st[6][2].end();++it) cout << *it << " ";
    //cout << endl;
}

int main() {
    int t = 1;
	while(t--) {
		solve();
	}
	int mark_EOF;
	if(scanf("%d", &mark_EOF) == EOF) return 0;
    return 0;
}

