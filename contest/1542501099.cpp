#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vvvi> vvvvi;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    t1 = (t1*5)%60, t2 = (t2*5)%60, h = (h*5)%60;
    bool ans = false;
    if (t1 > t2) swap(t1, t2);
    if ((h < t1 || h >= t2) && (m < t1 || m >= t2) && (s < t1 || s >= t2)) ans = true;
    if (h < t1) h += 60;
    if (m < t1) m += 60;
    if (s < t1) s += 60;
    t1 += 60;
    swap(t1, t2);
    if ((h < t1 || h >= t2) && (m < t1 || m >= t2) && (s < t1 || s >= t2)) ans = true;
    cout << (ans ? "YES\n" : "NO\n");
    return 0;
}