#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long n, k, q = 0;
    cin >> n >> k;
    vector <long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0) {
            q++;
        }
    }
    cout << q;
	return 0;
}