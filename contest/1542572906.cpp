#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	double h, m, s, t1, t2; cin >> h >> m >> s >> t1 >> t2;
	if (h == 12)h -= 12;
	h =h * 5 + 0.5;
	if (s == 0 && m == 0)h-=0.5;
	if (s > 0)m+=0.5;
	if (t1 == 12)t1 -= 12;
	if (t2 == 12)t2 -= 12;
	t1 = t1 * 5;
	t2 = t2 * 5;
	double buf = t1 + 0.5;
	while (true){
		if (buf == 60)buf = 0;
		if (buf == h || buf == m || buf == s)break;
		if (buf == t2){
			cout << "YES"; exit(0);
		}
		buf+=0.5;
	}
	buf = t1 - 0.5;
	while (true){
		if (buf<0)buf += 60;
		if (buf == h || buf == m || buf == s)break;
		if (buf == t2){
			cout << "YES"; exit(0);
		}
		buf-=0.5;
	}
	cout << "NO";
	return 0;
}