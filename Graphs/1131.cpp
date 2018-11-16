#include <iostream>

using namespace std;
int main() {
    int n,t;
    cin >> n >> t;
    int a[n];
    for (int i=1; i < n; i++ ) {
        cin >> a[i];
    }
    int s = 1;
    while (s < n) {
        if (s > t) {
            cout << "NO" << endl;
            return 0;
        }
        if (s == t) {
            cout << "YES" << endl;
            return 0;
        }
        s += a[s];
    }
    if (s == t){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}