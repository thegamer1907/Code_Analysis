#include <iostream>
#include <cmath>
//#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

typedef long long i64;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;


int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) {
        h = 0;
    }
    if (t1 == 12) {
        t1 = 0;
    }
    if (t2 == 12) {
        t2 = 0;
    }
    h = h * 60 * 60 + m * 60 + s;
    m = m * 12 * 60 + s * 12;
    s = s * 12 * 60;
    t1 = t1 * 60 * 60;
    t2 = t2 * 60 * 60;
    if (t1 > t2) {
        swap(t1, t2);
    }
    if (((h > t1 && h < t2) || (m > t1 && m < t2) || (s > t1 && s < t2)) && ((h < t1 || m < t1 || s < t1) || (h > t2 || m > t2 || s > t2))) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }
}
