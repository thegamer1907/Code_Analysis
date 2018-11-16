#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef map<ll, ll> mi;
typedef map<ll, ll> ml;

bool greatter(int a, int b) {
    return a > b;
}

#define all(x) x.begin(), x.end()

#define M 1000000007

int main() {
    string s;
    cin >> s;
    if (s.find("0000000") != string::npos || s.find("1111111") != string::npos)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


