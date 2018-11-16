#include<bits/stdc++.h>
using namespace std;

#define xx first
#define yy second

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

    string s;
    getline(cin, s);

    char last = 0;

    bool danger = false;
    int streak = 0;
    for (auto c : s) {
        if (last == 0 || last == c) {
            streak++;
            if (streak == 7) { danger = true; }
        } else {
            streak = 1;
        }

        last = c;
    }


    if (danger) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }



    return 0;
}
