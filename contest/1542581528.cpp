#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    ll fh = h * 60 * 60 + m * 60 + s;
    fh %= (3600 * 12);
    ll sh = m * 720 + s * 12;
    ll th = s * 720;
    ll mh = t1 * 60 * 60;
    mh %= (3600 * 12);
    ll trh = t2 * 60 * 60;
    trh %= (3600 * 12);
    bool flg = 0;
    for(int i = 0; i < 3600 * 12; i++) {
        if((mh + i) % (3600 * 12) == fh || (mh + i) % (3600 * 12)  == sh || (mh + i) % (3600 * 12)  == th) {
            break;
        }
        if((mh + i) % (3600 * 12)  == trh) {
            flg = 1;
            break;
        }
    }
    for(int i = 0; i < (3600 * 12); i++) {
        if((mh - i + (3600 * 12)) % (3600 * 12) == fh || (mh - i + (3600 * 12)) % (3600 * 12) == sh || (mh - i + (3600 * 12)) % (3600 * 12) == th) {
            break;
        }
        if((mh - i + (3600 * 12)) % (3600 * 12) == trh) {
            flg = 1;
            break;
        }
    }
    if(flg) {
        puts("YES");
    }else {
        puts("NO");
    }
}
