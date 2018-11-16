#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    int n, x, y, z;
    int xx = 0, yy = 0, zz = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        xx += x;
        yy += y;
        zz += z;
    }
    if (xx == 0 && yy == 0 && zz == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

