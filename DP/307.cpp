#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector <int> boys, girls;

int main() {
	int n, m, ans = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int in;
		cin >> in;
		boys.push_back(in);
	}
	cin >> m;
	for(int i = 0; i < m; ++i) {
		int in;
		cin >> in;
		girls.push_back(in);
	}
	
	sort(boys.begin(), boys.end());
	sort(girls.begin(), girls.end());
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if(abs(boys[i] - girls[j]) <= 1) {
				ans++;
				girls[j] = 1000;
				break;
			}
		}
	}
	cout << ans;
}
