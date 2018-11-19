//#ezcode

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define F first
#define S second
#define PB push_back
#define MP make_pair

/*long long bin_pow(long long x, long long e) {
    long long k;
    if (e == 0) return 1;
    if (e % 2) return bin_pow(x, e - 1) * x;
    else {
        k = bin_pow(x, e / 2);
        return k * k;
    }
}*/

int h, t1, t2;
int t;
int m, s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> h >> m >> s >> t1 >> t2;
    t1 *= 300 * 60;
    t2 *= 300 * 60;
    h *= 300 * 60;
    s *= 60 * 60;
    m *= 60 * 60;
    m += s / 60;
    h += m / 60;
    if(s == 0) s += 3600 * 60;
    if(m == 0) m += 3600 * 60;
    if(t2 < t1) {
        if(h > t1 || m > t1 || s > t1 || h < t2 || m < t2 || s < t2) t++;
    }
    else {
        if((h > t1 && h < t2) || (m > t1 && m < t2) || (s > t1 && s < t2)) t++;
    }
    swap(t1, t2);
    if(t2 < t1) {
        if(h > t1 || m > t1 || s > t1 || h < t2 || m < t2 || s < t2) t++;
    }
    else {
        if((h > t1 && h < t2) || (m > t1 && m < t2) || (s > t1 && s < t2)) t++;
    }
    //cout << t;
    if(t == 2) cout << "NO";
    else cout << "YES";
    return 0;
}
