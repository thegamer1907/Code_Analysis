#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	long long n, k, k_backup;
	int m;
	long long erase_count = 0;
	long long s_page = 0;
	long long ans = 0;
	queue<long long> q;
	cin >> n >> m >> k;

	k_backup = k;

	for (int i = 0; i < m; i++) {
		long long temp;
		cin >> temp;
		q.push(temp);
	}

	while (!q.empty()) {
		if (s_page == 0) {
			while (q.front() <= k) {
				q.pop();
				erase_count++;
				if (q.empty()) {
					ans++;
					std::cout << ans << endl;
					return 0;
				}
			}
			k += erase_count;
			if (erase_count == 0) {
				s_page = 1;
				continue;
			}
			ans++;
		}
		else {
			int another_k = k;
			k += k_backup * ((q.front() - k) / k_backup);
			if (another_k == k) k+=k_backup;
			s_page = 0;

		}
		erase_count = 0;
	}

	std::cout << ans << endl;
}