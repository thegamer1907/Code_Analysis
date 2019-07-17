#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    std::ios::sync_with_stdio(false);
	long long n, m, k;
	cin >> n >> m >> k;
	vector <long long> a(m);
	for(long long i = 0; i < n; ++i) {
		cin >> a[i];
	}
	long long str = 1, ind = 0, ans = 0, n_v = 0, n_k = 0;
	bool kek = false;
	while(ind < m) {
		bool f = false;
		while(ind < m && a[ind] - n_k <= str * k) {
			ind++;
			f = true;
			n_v ++;
			kek = false;
		}
		n_k += n_v;
		n_v = 0;
		if(!f) {
			if(kek)
				str++;
			else
				str = (a[ind] + k - 1 - n_k) / k;
			kek = true;
		}
		else
			ans++;

	}
	cout << ans;
	return 0;
}