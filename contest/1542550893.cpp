#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

#define debug(a) cerr << #a << " = " << (a) << endl;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

template<typename T> ostream& operator<<(ostream& o, const vector<T>& v) {
    int b=0; for (const auto& a : v) o << (b++ ? " " : "") << a; return o;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    h = h % 12;

    bool possible_forward = true;
    bool possible_backward = true;

    if (t1 > t2) {
        swap(t1, t2);
    }

    if (h >= t1 && h < t2) {
        possible_forward = false;
    } else {
        possible_backward = false;
    }

    if (m/5 >= t1 && m/5 < t2) {
        possible_forward = false;
    } else {
        possible_backward = false;
    }

    if (s/5 >= t1 && s/5 < t2) {
        possible_forward = false;
    } else {
        possible_backward = false;
    }

    bool possible = possible_forward || possible_backward;

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}
