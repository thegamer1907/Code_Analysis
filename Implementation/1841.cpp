#include <iostream>

using namespace std;

int sum(int a[], int n) {
    int s=0;
    for (int i=0; i<n; i++) {
        s += a[i];
    }
    return s;
}


int main() {
    int n;
    cin >> n;
    int x[n], y[n], z[n];
    for (int i=0; i<n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    if (sum(x,n)==0 && sum(y,n) == 0 && sum(z,n) == 0) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
