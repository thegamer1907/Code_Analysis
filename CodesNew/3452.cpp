#include <bits/stdc++.h>

using namespace std;

using ll = long long;

template<typename T>
ostream& operator<< (ostream& os, const vector<T>& v) {
    for (T e: v) {
        os << e << ' ';
    }
    return os;
}

template<typename T>
istream& operator>> (istream& is, vector<T>& v) {
    for (int i = 0; i < v.size(); ++i) {
        is >> v[i];
    }
    return is;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int cx = m;

    for (int i = 0; i < n; ++i) {
        while (a[i] != a.back() && cx) {
            ++a[i];
            --cx;
        }
    }

    // minimum
    int maximum = a.back() + cx / n;
    if (cx % n != 0) {
        ++maximum;
    }
    cout << maximum << ' ';
    // maximum
    cout << a.back() + m << endl;

    return 0;
}
