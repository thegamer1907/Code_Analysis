#include <bits/stdc++.h>

using namespace std;

long long n, m, p, k, power;
long long prefix[201000];
long long arrows[201000];

int main(){
    cin >> n >> m;
    cin >> prefix[0];

    for (int i = 1; i < n; i++){
        cin >> power;
        prefix[i] = prefix[i - 1] + power;
    }

    k = 0;
    for (int i = 0; i < m; i++){
        cin >> arrows[i];
        k += arrows[i];
        p = upper_bound(prefix, prefix + n, k) - prefix;
        if (p == n){
            p = k = 0;
        }
        cout << n - p <<endl;
    }
    return 0;
}
