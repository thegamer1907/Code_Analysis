#include <iostream>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int a[n];
    int maximum = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        maximum = max (maximum, a[i]);
    }

    int difference = m - (maximum * n - sum);

    if (difference <= 0) {
        cout << maximum << " ";
    }
    else {
        cout << (difference + n - 1) / n + maximum << " ";
    }

    cout << m + maximum << endl;

}