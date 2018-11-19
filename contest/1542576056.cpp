#include<bits/stdc++.h>
using namespace std;

double min2(double a, double b) {
    return (a > b) ? b : a;
} 

double max2(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float h, m, s;
    float t1, t2;

    cin >> h >> m >> s >> t1 >> t2;

    t1 = t1*30;
    t2 = t2*30;

    if(t1 >= 360)
        t1 -= 360;

    if(t2 >= 360)
        t2 -= 360;

    h = (h*30 + m*0.5 + s/120.0);
    if(h >= 360) {
        h -= 360;
    }

    m = (6*m + 0.1*s);
    if(m >= 360) {
        m -= 360;
    }

    s = (6*s);
    if(s >= 360) {
        s -= 360;
    }

    double a = min2(h, min2(s, m));
    double c = max2(h, max2(s, m));
    double b = h + m + s - a - c;

    // Hello World

    if(t1 < a) {
        if((t2 > c) || (t2 < a)) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }else if(t1 > a && t1 < b) {
        if((t2 > a) && (t2 < b)) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }else if(t1 > b && t1 < c) {
        if(t2 > b && t2 < c) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }else if(t1 > c) {
        if(t2 > c || t2 < a) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}