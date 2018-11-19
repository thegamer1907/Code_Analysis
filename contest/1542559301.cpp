#include <bits/stdc++.h>

using namespace std;

int h, m, s, t1, t2;

bool clockwise(){
  return (h < t1 || h >= t2) && (m < t1*5 || m >= t2*5) && (s < t1*5 || s >= t2*5);
}

bool counterClockwise(){
  return !(h < t1 || h >= t2) && !(m < t1*5 || m >= t2*5) && !(s < t1*5 || s >= t2*5);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> h >> m >> s >> t1 >> t2;

    if(t1 > t2) swap(t1, t2);
    
    cout << ((clockwise() || counterClockwise())? "YES" : "NO") << endl;

    return 0;
}
