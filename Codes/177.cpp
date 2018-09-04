#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX_N 100000;


int main() {
    int n, i, t;
    cin >> n;
    vector<int> a;
    for (i = 0; i < n; i++) {
        cin >> t;
        if (i > 0) t += a[i-1];
        a.push_back(t);
    }
    int m;
    cin >> m;
    while (m--) {
        cin >> t;
        vector<int>::iterator it = lower_bound(a.begin(), a.end(), t);
        cout << it-a.begin()+1 << '\n';        
    }

}