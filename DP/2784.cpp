#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;
int n;

int main() {
	cin >> n;
	int t = 1;
	while (n != 0) {
		for (int i = 0; i < n % 10; i++)
			if (i < ans.size())
				ans[i] += t;
			else
				ans.push_back(t);
		t *= 10;
		n /= 10;
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << ' ';
}
