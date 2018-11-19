#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
//#define MAX_N 100000 + 100
using namespace std;


const int INF = 1e9 + 1;
typedef long long ll;
#define int ll
typedef pair<int,int> pii;
const int maxn = 1000 + 10;
int vis[maxn];
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h,m,s;
    cin >> h >> m >> s;
    int c;
    if (m || s) c=1;
    vis[(10 * h) % 120 + c] = 1;
    if (s) c = 1;
    else c = 0;
    vis[m * 2 + c] = vis[s * 2] = 1;

    int t;
    cin >> s >> t;
    s *= 10;
    t *= 10;
    s %= 120;
    t %= 120;
    int cs = s;
    bool flag = false;
    while (cs != t){
        if (vis[cs]) break;
        cs++;
        cs %= 120;
        //if (vis[cs])break;
    }
    if (cs == t){
        cout << "YES" << endl;
        return 0;
    }
    cs = s;
    while(cs != t){
        if (vis[cs]) break;
        cs--;
        cs += 120;
        cs %= 120;
        //if (vis[cs]) break;
    }
    if (cs == t){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    return 0;
}
