#include <bits/stdc++.h>
#define eps 1e-8
#define INF 0x3f3f3f3f
#define PI acos(-1)
#define lson l,mid,rt<<1
#define rson mid+1,r,(rt<<1)+1
#define CLR(x,y) memset((x),y,sizeof(x))
#define fuck(x) cerr << #x << "=" << x << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int seed = 131;
const int maxn = 5e5 + 5;
const int mod = 1e9 + 7;
int n;
string s[maxn];
int pos[maxn];
int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    pos[n] = s[n].size();
    for (int i = n - 1; i >= 1; i--) {
        int len = min(s[i].size(),s[i+1].size());
        if (s[i] >s[i + 1]) {
            int j;
            for (j = 0; j < len; j++) {
                if (s[i][j] > s[i + 1][j]) {
                    break;
               }
            }s[i] = s[i].substr(0, j);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << s[i] << endl;
    }
    return 0;
}



