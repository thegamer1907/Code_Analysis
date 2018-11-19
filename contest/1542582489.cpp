#include<iostream>

using namespace std;
int a[70];
int h, m, s, t1, t2;
main(){
    cin >> h >> m >> s >> t1 >> t2;
    h *= 5;
    h %= 60;
    a[h] ++, a[m] ++, a[s]++;

    t1 *= 5;
    t2 *= 5;
    t1 %= 60;
    t2 %= 60;

    int mn = min(t1, t2);
    int mx = t1 + t2 - mn;
    int cnt = 0;
    for(int i = mn + 1; i < mx; ++i){
        if(a[i] > 0){
            cnt += a[i];
        }
    }

    //cout << cnt << " " << mn << " " << h << " " << m << " \n";
    if(cnt == 3){
        cout << "YES";
        return 0;
    }

    if(h == mn && (m > 0 || s > 0)){
        ++cnt;
    }
    if(m == mn && s > 0){
        ++cnt;

    }

    if(cnt == 3 || cnt == 0){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
