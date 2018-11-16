#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    
    cin >> n;
    vector<int>A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    cin >> m;
    vector<int>B(m);
    for(int i = 0; i < m; i++) cin >> B[i];
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int a = 0;
    int b = 0;
    
    int res = 0;
    
    while(a < n && b < m) {
        if (abs(A[a] - B[b]) <= 1) {
            a++;
            b++;
            res++;
        } else {
            if (A[a] < B[b]) {
                a++;
            } else {
                b++;
            }
        }
    }
    
    cout << res << endl;
    
    return 0;
}
