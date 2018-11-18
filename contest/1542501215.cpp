#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, m, s;
    int t[2], p[2];
    cin >> h >> m >> s >> t[0] >> t[1];
    t[0] = (t[0] % 12) * 5;
    t[1] = (t[1] % 12) * 5;
    int a[3];
    a[0] = (h % 12) * 5;
    a[1] = m, a[2] = s;
    sort(a, a + 3);
    for(int i = 0; i < 2; i++){
        if(t[i] > a[0] && t[i] <= a[1])
            p[i] = 1;
        else if(t[i] > a[1] && t[i] <= a[2])
            p[i] = 2;
        else    p[i] = 3;
    }
    if(p[0] == p[1])    cout << "YES" <<endl;
    else    cout << "NO" << endl;
}
