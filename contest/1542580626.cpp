#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

typedef long long ll;
using namespace std;

const ll MAXN = +100500;
const ll INF = 4e18;
double t1, t2;
double eps = 1e-5;

int main() {
    double p[4];
    for(int i = 1; i <= 3; i++) {
        cin >> p[i];
    }
    if(p[1] == 12) p[1] = 0;
    p[1] *= 5;
    p[2] += p[3] / 60;
    if(p[2] > 60) {
        p[2] -= 60;
    }
    p[1] += p[2] / 60;
    if(p[1] > 60) {
        p[1] -= 60;
    }
    cin >> t1 >> t2;
    if(t1 == 12) t1 = 0;
    if(t2 == 12) t2 = 0;
    t1 *= 5;
    t2 *= 5;
    if(t1 > t2) swap(t1, t2);
    bool ok = true;
    double z = 0;
    for(int i = 1; i <= 3; i++) {
        if(p[i] > t1 && p[i] < t2) {
            z++;
        }
    }
    if(z == 3 || z == 0) {
        cout << "YES";
    } else cout << "NO";
}

