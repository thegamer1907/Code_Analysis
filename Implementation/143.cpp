#include <bits/stdc++.h>
#define int int64_t
#define F(i, n) for(int i = 0; i < n; ++i)
using namespace std;

int input() {
    int n = 0, m = 1; char c = getchar();
    while(!((c >= '0' && c <= '9') || c == '-')) c = getchar();
    if(c == '-') m = -1, c = getchar();
    while(c >= '0' && c <= '9') {
        n = n * 10 + c - '0';
        c = getchar();
    }
    return n * m;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    int n = input(), a = input(), b = input();
    vector<int> v(n);
    F(i, n) v[i] = i + 1;
    int r = 1;
    while(true) {
        vector<int> nw;
        if(v.size() == 2) {
            cout << "Final!";
            return 0;
        }
        for(int i = 0; i < v.size(); i += 2) {
            if(v[i] == a && v[i + 1] == b) {
                cout << r;
                return 0;
            }
            if(v[i] == b && v[i + 1] == a) {
                cout << r;
                return 0;
            }
            if(v[i] == a) nw.push_back(v[i]);
            else
            if(v[i] == b) nw.push_back(v[i]);
            else
            if(v[i + 1] == a) nw.push_back(v[i + 1]);
            else
            if(v[i + 1] == b) nw.push_back(v[i + 1]);
            else
                nw.push_back(v[i]);
        }
        v = nw;
        ++ r;
    }
}
