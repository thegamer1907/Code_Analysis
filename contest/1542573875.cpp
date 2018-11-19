#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void sol(){
//    freopen("io.txt", "a+", stdout);
//    freopen("io.txt", "r", stdin);
//    printf("\nsol---%s\n", __TIMESTAMP__);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    vector<bool> part(13, true);
    double ph = h, pm = (double) m * 12 / 60, ps = (double)s * 12 / 60;
    pm += (double) 1/60 * ps;
    ph += (double)1/12 * pm;
    int cnt = 0;
    if(t1 > t2)
        swap(t1, t2);
    if(t2 > ph && ph > t1)
        cnt++;
    if(t2 > pm && pm > t1)
        cnt++;
    if(t2 > ps && ps > t1)
        cnt++;
    if(cnt == 0 || cnt == 3)
        cout << "YES";
    else
        cout << "NO";
}
int main(){
    sol();
}