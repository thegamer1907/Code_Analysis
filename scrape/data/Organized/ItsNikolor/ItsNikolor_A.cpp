#include<iostream>
#include<fstream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<sstream>
#include<map>
#include<deque>
using namespace std;

int main() {
//	ifstream cin("in.txt");
//	ofstream cout("out.txt");
	long long n, k;
	int m;
	cin >> n >> m >> k;
	vector<long long> p(m);
	for (int i = 0; i < m; i++) cin >> p[i];
	long long t = 0;
	long long ans = 0;
	for (int i = 0; i < m;) {
		long long k1 = ((p[i] - 1 - t) / k)*k, k2 = k1 + k;
		while (i<m&&p[i] - t <= k2) i++;
		t = i;
		ans++;
	}
	cout << ans;

}