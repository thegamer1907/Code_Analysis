#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define fr first
#define se second
#define pb push_back
#define inf 1e9
#define INF 1e18
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
template<class T>inline void chkmin(T&x,T y){if(y<x)x=y;}
template<class T>inline void chkmax(T&x,T y){if(x<y)x=y;}
#define N 105

char t[10], s[N][10];

int main() {
    int i, j, n;
    scanf("%s", &t);
    scanf("%d", &n);
    for(i = 1; i <= n; i ++) scanf("%s", s[i]);
    for(i = 1; i <= n; i ++) {
        if(strcmp(s[i], t) == 0) {
            puts("YES");
            return 0;
        }
    }
    for(i = 1; i <= n; i ++) for(j = 1; j <= n; j ++) {
        if(s[i][1] == t[0] && s[j][0] == t[1]) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}
