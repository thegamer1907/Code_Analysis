#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

bool can[13][13];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif // LOCAL

    memset(can, true, sizeof can);

    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    h %= 12;

    if(s % 5 == 0) {
        int f = s / 5;
        can[f][f] = false;
//        cout << f << endl;
    } else {
        int f = (s / 5) % 12;
        int t = (f+1)%12;
        can[f][t] = can[t][f] = false;
    }

    if(m % 5 == 0 && s == 0) {
        int f = m/5;
        can[f][f] = false;
//        cout << f << endl;
    } else {
        int f = (m/5) % 12;
        int t = (f+1)%12;
//        cout << f << " " << t << endl;
        can[f][t] = can[t][f] = false;
    }

    if(s == 0 && m == 0) {
        int f = h;
        can[f][f] = false;
    } else {
        int f = h;
        int t = (f+1)%12;
//        cout << f << " " << t << endl;
        can[f][t] = can[t][f] = false;
    }

    t1 %= 12;
    t2 %= 12;

    if(!can[t1][t1] || !can[t2][t2]) cout << "NO";
    else {
        int pos = t1;
        while(pos != t2) {
            int nxt = (pos+1)%12;
            if(!can[pos][nxt]) break;
            if(!can[nxt][nxt]) break;
            pos = nxt;
        }
        if(pos == t2) {
            cout << "YES"; return 0;
        }
        pos = t1;
        while(pos != t2) {
            int nxt = (pos-1+12)%12;
            if(!can[pos][nxt]) break;
            if(!can[nxt][nxt]) break;
            pos = nxt;
        }
        if(pos == t2) {
            cout << "YES"; return 0;
        } else {
            cout << "NO"; return 0;
        }
    }

}
