#include <bits/stdc++.h>

using namespace std;

#define int int64_t
#define endl '\n'
#define fi first
#define se second
#define mp make_pair

template <typename T1, typename T2>
ostream & operator << (ostream & out, pair <T1, T2> p) {
    //out << p.fi << " " << p.se;
    out << "{" << p.fi << ", " << p.se << "}";
    return out;
}

template <typename T1, typename T2>
istream & operator >> (istream & in, pair <T1, T2> & p) {
    in >> p.fi >> p.se;
    return in;
}

template <typename T>
ostream & operator << (ostream & out, vector <T> arr) {
    for (int i = 0; i < (int)arr.size() - 1; ++i)
        out << arr[i] << " ";
    if (arr.back())
        out << arr.back();
    return out;
}

template <typename T>
istream & operator >> (istream & in, vector <T> & arr) {
    for (auto & x : arr)
        in >> x;
    return in;
}

signed main()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    int now = 0;
    for (int l = 2; l < n; l *= 2) {
        now++;
        for (int i = 0; i < n; i += l) {
            if (a >= i && a < i + l && b >= i && b < i + l) {
                cout << now << endl;
                return 0;
            }
        }
    }
    cout << "Final!" << endl;
    return 0;
}