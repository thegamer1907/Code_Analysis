#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	long long n, q;
	cin >> n >> q;
	vector<long long> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if(i)v[i] += v[i - 1];
	}
	long long sum = 0;
	long long index;
	for (int i = 0; i < q; i++) {
		long long find;
		cin >> find;
		sum += find;
		index = upper_bound(v.begin(), v.end(), sum) - v.begin();
		if (index == n) {
			index = 0;
			sum = 0;
		}
		cout <</*index<<' '<<*/ n - index << endl;
	}

}