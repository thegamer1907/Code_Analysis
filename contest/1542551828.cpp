#include <iostream>
using namespace std;
int main() {
	int h, m, s;
	cin >> h >> m >> s;
	int t1, t2;
	cin >> t1 >> t2;
	if (t1 < t2)
		swap(t1, t2);
	int cnt = 0;
	//t1>t2
	if (s > t2 * 5 && s < t1 * 5)
		cnt++;
	if (m >= t2 * 5 && m < t1 * 5)
		cnt++;
	if (h >= t2&&h < t1)
		cnt++;
	if (cnt < 3 && cnt>0)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
//	system("pause");
	return 0;
}