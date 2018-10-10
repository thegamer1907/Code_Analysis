#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	sort(a, a + n);

	double max = 0;
	if (a[0] >= (l - a[n - 1]))
		max = a[0];
	else 
		max = (l - a[n - 1]);
	double radius = max;

	for (int i = 1; i < n; ++i){
		if (((a[i] - a[i - 1]) / 2.0) >= max){
			max = (a[i] - a[i - 1]) / 2.0;
			radius = max;
		}
	}
	cout << fixed << setprecision(10) << radius << endl;
	return 0;
}
// 1538616156963
