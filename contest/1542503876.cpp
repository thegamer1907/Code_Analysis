#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = (3600*h + 60*m + s) % 43200;
    m = (720*m + 12*s) % 43200;
    s = (720*s) % 43200;
    t1 = (t1*3600) % 43200;
    t2 = (t2*3600) % 43200;
    bool pos = false;
    for(int i=t1; true; i--) {
        if(i == -1) i = 43199;
        if(i == t2) {
            pos = true;
            break;
        }
        if(i == h || i == m || i == s) {
            break;
        }
    }
    for(int i=t1; true; i++) {
        if(i == 43200) i = 0;
        if(i == t2) {
            pos = true;
            break;
        }
        if(i == h || i == m || i == s) {
            break;
        }
    }
    if(pos) cout << "YES\n";
    else cout << "NO\n";
}