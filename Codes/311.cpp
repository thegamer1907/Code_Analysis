#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
const int maxn = 1000001;
int a[maxn];

const int mod = 1e9 + 7;

int gcd(int a, int b) {
    return !a? b : gcd(b % a, a);
}



char L[200], R[200];
map<string, int> m;

bool isprime(int n) {
    if(n == 1) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int ptr = 1;
    for(int i = 1; i <= n; i++ ) {
        int c=  0;
        cin >> c;
        for(int j = 0; j < c; j++) {
            a[ptr++] = i;
        }
    }

    int m;
    cin >> m;

    for(int i =0 ; i < m; i++) {
        int q;
        cin >> q;
        cout << a[q] << endl;
    }

}

