#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12, t1 %= 12, t2 %= 12;
    int s1 = 43200/60*s;
    int m1 = 12*(m*60+s);
    int h1 = 3600*h + 60*m + s;
    int _t1 = 3600 * t1, _t2 = 3600 * t2;
    bool flag = true;
    for(int i = _t1; i != _t2; i = (i+1)%43200){
        if(i == s1 || i == m1 || i == h1){
            flag = false; break;
        }
    }
    if(flag) return 0*puts("YES");
    else flag = true;
    for(int i = _t2; i != _t1; i = (i+1)%43200){
        if(i == s1 || i == m1 || i == h1){
            flag = false; break;
        }
    }
    if(flag) return 0*puts("YES");
    else return 0*puts("NO");
}