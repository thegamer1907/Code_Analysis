#include <iostream>
#include <algorithm>
using namespace std;
long long x, i, q, n, a[2001000], sum = 0;
int main (){
    cin >> n >> q >> a[0];
	for (int i = 1; i < n; i++)
        cin >> a[i], a[i] += a[i - 1];
	while (q--) {
        cin >> x;
		sum += x;
		i = upper_bound(a, a + n, sum) - a;
		if (i == n) i = sum = 0;
		cout << n - i << endl;
	}
	return 0;
}
