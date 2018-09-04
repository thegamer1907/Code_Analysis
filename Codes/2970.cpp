#include <bits/stdc++.h>

using namespace std;

const int md = 1e9 + 7;
const int rep = 257;

const int MAXN = 1e6 + 10;

string s;

int hashing[MAXN];
int pw[MAXN];

int add(int a, int b) {
    a += b;
    if (a >= md) a -= md;
    return a;
}

int mult(int a, int b) {
    return ((long long) a * b) % md;
}

int sub(int a, int b) {
    a -= b;
    if (a < 0) a += md;
    return a;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin >> s;
    if (s.size() <= 2) {
        cout << "Just a legend" << "\n";
        return 0;
    }
    pw[0] = 1;
    for (int i = 1; i <= s.size(); i++) {
        pw[i] = mult(pw[i - 1], rep);
    } 
    hashing[0] = s[0];
    for (int i = 1; i < s.size(); i++) {
        hashing[i] = add(s[i], mult(hashing[i - 1], rep)); 
    }
    vector<int> lens;
    for (int i = 1; i <= s.size() - 2; i++) {
        if (hashing[i - 1] == sub(hashing[s.size() - 1], mult(pw[i], hashing[s.size() - 1 - i]))) {
            lens.push_back(i);
        } 
    }
    int lo = -1, hi = lens.size();
    while (lo + 1 < hi) {
        int mid = (lo + hi) / 2;
        int sz = lens[mid];
        bool ok = 0;
        for (int j = sz; j < s.size() - 1; j++) {
            if (hashing[sz - 1] == sub(hashing[j], mult(pw[sz], hashing[j - sz]))){
                ok = 1; 
                break;
            }
        }
        if (ok) {
            lo = mid;
        } 
        else {
            hi = mid;
        }
    }
    if (lo == -1) {
        cout << "Just a legend" << "\n";
    }
    else {
        cout << s.substr(0, lens[lo]) << "\n";
    }
    return 0;
}
