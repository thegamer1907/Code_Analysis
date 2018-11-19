#include <iostream>
using namespace std;

struct Time {
    int h, m, s;
    Time(int h, int m, int s): m(m), h(h), s(s) {}
    double hang() {
        return (h % 12) * 360.0 / 12 + m * 360 / 60 / 12.0 + s * 360 / 60 / 60.0 / 12.0;
    }
    double mang() {
        return m * 360 / 60 + s * 360 / 60 / 60.0;
    }
    double sang() {
        return s * 360 / 60;
    }
};

bool in(double a1, double a2, double b) {
    if(a1 <= a2) return a1 <= b && b <= a2;
    else return !in(a2, a1, b);
}

int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    Time T(h, m, s);
    Time T1(t1, 0, 0), T2(t2, 0, 0);
    double a1 = T1.hang(), a2 = T2.hang();
    bool ok = (!in(a1, a2, T.hang()) && !in(a1, a2, T.mang()) && !in(a1, a2, T.sang())) ||
              (!in(a2, a1, T.hang()) && !in(a2, a1, T.mang()) && !in(a2, a1, T.sang()));
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
	     	   	 			  		  		     		