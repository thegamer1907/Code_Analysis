#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h%=12;
	t1%=12;
	t2%=12;
	h *= 10;
	t1 *= 10;
	t2 *= 10;
	m *= 2;
	s *= 2;
	if (m || s)
		h=(h+1)%120;
	if (s)
		m=(m+1)%120;
	bool failed = false;
	for(int i = t1; i!=t2; i=(i+1)%120){
		if(i==h||i==m||i==s){
			failed = true;
			break;
		}
	}
	if (failed) {
		failed = false;
		for (int i = t1; i != t2; i = (i + 119) % 120) {
			if (i == h || i == m || i == s) {
				failed = true;
				break;
			}
		}
	}
	if (failed)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}
