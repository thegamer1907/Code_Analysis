#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, D2, R2, D1, R1;
string s;
map<string, int>mp;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		mp[s]++;
		D1++;
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (mp[s] == 1) {
			D1--; R1++;
			R2++;
		}
		else
			D2++;
	}
	int turn = 1;
	while (1) {
		if (turn++ & 1) {
			if (R1 && R2)R1--, R2--;
			else if (R1)	R1--;
			else if (D1)	D1--;
			else return cout << "NO", 0;
		}
		else {
			if (R1 && R2)R1--, R2--;
			else if (R2)	R2--;
			else if (D2)	D2--;
			else return cout << "YES", 0;
		}
	}
}