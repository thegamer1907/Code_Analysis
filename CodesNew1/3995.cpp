#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

vector<ull> w;
ull accum; int a;

void binarySearch(ull value) {
    int b = w.size() - 1, k;
    while(a <= b) {
        k = (a + b) / 2;
        if(w[k] - accum == value)
            a = k + 1;
        if(w[k] - accum < value)
            a = k + 1;
        else b = k - 1;
    }
    accum += value;
}

int main() {
    int n, m;
    ull v, ant;
    cin >> n >> m;
    ant = 0;
    while(n--) {
        cin >> v;
        w.push_back(ant + v);
        ant += v;
    }
    a = 0; accum = 0;
    while(m--) {
        cin >> v;
        binarySearch(v);
        if(a >= w.size()) { a = 0; accum = 0; }
        cout << w.size() - a << endl;
    }
    return 0;
}
