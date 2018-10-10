#include<bits/stdc++.h>

using namespace std;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);
    ld izq, der, med, cnt, b_gap;
    ld n, l;
    cin >> n;
    cin >> l;
    vector<ld> a(n);
    der = l;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    izq = 0;
    cnt = 0;
    sort(a.begin(), a.end());
    b_gap = 0;
    for (int i = 1; i < n; i++) {
        b_gap = max(b_gap, a[i] - a[i - 1]);
    }
    b_gap /= 2;

    while(abs(izq - der) > 0.0000000001){
        med = (der + izq)/2;
        if (a[0] - med > 0) {
            izq = med;
            continue;
        }
        if (a[a.size() - 1] + med < l) {
            izq = med;
            continue;
        }
        if (med < b_gap)
            izq = med;
        else
            der = med;
    }
    cout << izq << "\n";
}

// 1538782745651
