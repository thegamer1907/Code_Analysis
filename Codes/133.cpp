#include <iostream>
using namespace std;

int main() {
    int n, m, a[1000002];
    cin >> n;
    int i = 0, sum = 0;
    while(i < n) {
        int b;
        cin >> b;
        for (int j = 1; j <= b; j++) {
            a[sum + j] = i+1;
        }
        sum += b;
        i++;
    }

    cin >> m;
    while(m-- > 0) {
        int q;
        cin >> q;
        cout << a[q] << endl;
    }
}
