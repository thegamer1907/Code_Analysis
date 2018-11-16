#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n, m, a[101], b[101], ans;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a, a+n); sort(b, b+m);
    int i = 0, j = 0;
    while(i != n && j != m) {
        if(abs(a[i] - b[j]) <= 1) {
            //cout << a[i] << " " << b[j] << endl;
            ans++;
            i++; j++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
        else if(a[i] < b[j]) {
            i++;
        }
    }
    cout << ans << endl;
}