#include<bits/stdc++.h>
using namespace std;

bool cmp(double a, double b, double x) {
    if( (x < a && x < b) || (x > a && x > b) )
        return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    double h, m, s, t1, t2, ta, tb;
    cin >> h >> m >> s >> t1 >> t2;

    if(h == 12) h  = 0;
    h = (h * 30) + (m * 0.5) + (s * 0.0083);
    m = (m * 6) + (s * 0.1);
    s = (s * 6);

    if(t1 == 12) t1 = 0;
    if(t2 == 12) t2 = 0;
    t1 *= 30;
    t2 *= 30;

    ta = min(t1, t2);
    tb = max(t1, t2);

    //cout << h << " " << m << " " << s << " " <<t1 << " " << t2 << "\n";
    if(cmp(ta, tb, h) && cmp(ta, tb, m) && cmp(ta, tb, s)){
        cout << "YES";
        return 0;
    }
    else{
        if(cmp(0, ta, h) && cmp(0, ta, m) && cmp(0, ta, s)){
            if(cmp(tb, 360, h) && cmp(tb, 360, m) && cmp(tb, 360, s)){
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}
