
#include <algorithm>
#include <iostream>
#include <fstream>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define fore(i, l, r) for (int i = l; i < r; i++)
#define forn(i, n) fore(i, 0, n)

int main() {

	int h, m, s, t1, t2; 
	cin >> h >> m >> s >> t1 >> t2;

	int s_pos = s * 720;
	int m_pos = m * 720 + s * 12;
	int h_pos = (h % 12) * 3600 + m * 60 + s;
	int t1_pos = (t1 % 12) * 3600;
	int t2_pos = (t2 % 12) * 3600;
	int min_pos = min(t1_pos, t2_pos);
	int max_pos = max(t1_pos, t2_pos);

	bool answer = false;
	if (min_pos < min(s_pos, min(m_pos, h_pos)) &&
		max_pos > max(s_pos, max(m_pos, h_pos))) answer = true;
	if ((s_pos < min_pos || s_pos > max_pos) &&
		(m_pos < min_pos || m_pos > max_pos) &&
		(h_pos < min_pos || h_pos > max_pos)) answer = true;

	if (answer) cout << "YES";
	else cout << "NO";
	return 0;
}