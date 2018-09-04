#include <iostream>
using namespace std;

int main() {
    int n, m, a[100002];
    cin >> n;
    int i = 1, sum = 0;
    a[0] = 0;
    while(i <= n) {
        int b;
        cin >> b;
        sum += b;
        a[i] = sum;
        i++;
    }

    cin >> m;
    while(m-- > 0) {
        int q;
        cin >> q;
        int low = 0, high = n;
        while(low + 1 < high) {
            int mid = (low + high) / 2;
            if (a[mid] < q) low = mid;
            else high = mid;
        }
        // a[high-1] < q <= a[high]
        cout << high << endl;
    }
}
