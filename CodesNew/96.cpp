#include <iostream>
#include <iomanip>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <ctime>
#include <numeric>

using namespace std;

int main() {
    
    // cout << "TEST: ";
    
    long long n, l;
    cin >> n >> l;
    
    vector <long long> a;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());
    
    long long max = - 100;
    
    if (a[0] != 0) {
        if (a[0] * 2 > max) {
            max = a[0] * 2;
        }
    }
    if (a[n-1] != l) {
        if ((l - a[n-1]) * 2 > max) {
            max = (l - a[n-1]) * 2;
        }
    }
    
    long long prev = a[0];
    
    for (auto now : a) {
        if (now - prev > max) {
            max = now - prev;
        }
        prev = now;
    }
    
    cout << fixed << setprecision(10) << endl << double(max) / 2;
    
    return 0;
}
