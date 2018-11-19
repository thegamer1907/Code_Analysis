#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
typedef long long ll;

int h, m, s, t1, t2;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> m >> s >> t1 >> t2;
	if (h == 12)h = 0;
	float H, M, S;
	//[0,12)
	if (m || s)H = h + 0.5;
	else H = h;
	if (s == 0) {
		if (m % 5 == 0)
			M = m / 5;
		else
			M = m / 5 + 0.5;
	}
	else {
		M = m / 5 + 0.5;
	}
	if (s % 5 == 0)
		S = s / 5;
	else
		S = s / 5 + 0.5;
	if (t1 == 12)t1 = 0;
	if (t2 == 12)t2 = 0;
	int mi = min(t1, t2);
	int mx = max(t1, t2);
#define ins(v) ((v)>=mi&&(v)<=mx)
	if (ins(H) && ins(M) && ins(S))
		cout << "YES\n";
	else {
		if ((!ins(H)) && (!ins(M)) && (!ins(S)))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}