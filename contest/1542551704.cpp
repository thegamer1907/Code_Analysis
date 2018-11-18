#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int sumk[205];
int main() {

	int n;
	cin >> n;
	vector<string> s;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		s.push_back(x);
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		string news = s[a - 1] + s[b - 1];
		if (news.length() > 1000)
			news = news.substr(0, 500) + news.substr(news.length() - 500, 500);
		s.push_back(news);
		int k = 1;
		bool flag = false;
		while (!flag&&k<=10) {
			for (int j = 0; j <  (1<<k); ++j) {
				string t;
				for (int h = 0; h < k; ++h) {
					if (j&(1 << h)) t += '1';
					else t += '0';
				}
				if (news.find(t) == -1) {
					flag = true;
					break;
				}
			}
			if (flag)
				break;
			k++;
		}
		sumk[n + i] = max(max(sumk[a - 1], sumk[b - 1]), k - 1);
		cout << sumk[n+i] << endl;

	}
	//system("pause");
	return 0;
 }