#include <iostream>

using namespace std;

int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	int s1, m1, h1;
	s1 = s * 60 * 60;
	m1 = 60 * (m * 60 + s);
	h1 = h * 5 * 60 * 60 + (m * 60 + s);

	t1 = t1 * 5 * 60 * 60;
	t2 = t2 * 5 * 60 * 60;

	int maxT = max(t1, t2);
	int minT = min(t1, t2);
	if(maxT > s1 and maxT > m1 and maxT > h1 and minT < s1 and minT < m1 and minT < h1)
		cout << "YES" << endl;
	else if( (s1 > maxT or s1 < minT) and (m1 > maxT or m1 < minT) and (h1 > maxT or h1 < minT))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
