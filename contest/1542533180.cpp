#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define inf 0x7FFFFFFF
typedef long long ll;
typedef pair<int, int> P;
const int maxn = 1e5 + 5;
const ll INF = 1e18;

int main()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    bool vis[60*60*12+5];
    memset(vis, false, sizeof(vis));
    if(h==12)
        h = 0;
    if(t1==12)
        t1 = 0;
    if(t2==12)
        t2 = 0;
    t1 *= 60*60;
    t2 *= 60*60;
    vis[h*60*60+m*60+s] = true;
    vis[m*60*12+s] = true;
    vis[s*60*12] = true;
    for(int i=t1; i<=t1+60*60*12; i++) {
        if(vis[i%(60*60*12)]) {
            break;
        }
        if(i%(60*60*12)==t2) {
            puts("YES");
            return 0;
        }
    }
    for(int i=t2; i<=t2+60*60*12; i++) {
        if(vis[i%(60*60*12)]) {
            break;
        }
        if(i%(60*60*12)==t1) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}
