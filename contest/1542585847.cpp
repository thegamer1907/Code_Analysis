#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h *= 5;
    h %= 60;
    t1 *= 5;
    t2 *= 5;
    t1 %= 60;
    t2 %= 60;
    int minx, maxi;
    minx = min(t1, t2);
    maxi = max(t1, t2);
    bool check1 = true, check2 = true;
    for(int i = minx; i < maxi; ++i){
        if(i == h || i == s || i == m)
            check1 = false;
    }
    for(int i = maxi; i < minx + 60; ++i){
        int x = i % 60;
        if(x == h || x == s || x == m)
            check2 = false;
    }
    if(check1 || check2)
        cout << "YES" << endl;
    else cout <<"NO" << endl;
    return 0;
}
