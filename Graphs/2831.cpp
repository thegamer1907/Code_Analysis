#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX_N = 1e5 + 5;
const int MAX_C = 1e5 + 5;

class Color {
public:
	int id, cntDifferent;
	unordered_map< int, bool > otherColors;

	Color(int id = 0) : id(id) {
		cntDifferent = 0;
	}
};

int c[MAX_N];
Color colors[MAX_C];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int maxC = 0;
	for(int i = 1; i <= n; i++) {
		cin >> c[i];
		maxC = max(c[i], maxC);
	}

	for(int i = 1; i <= maxC; i++) {
		colors[i] = Color(i);
	}

	for(int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		
		if(c[x] != c[y]) {
			if(!colors[c[x]].otherColors[c[y]]) {
				colors[c[x]].cntDifferent++;
				colors[c[x]].otherColors[c[y]] = true;
			}
			if(!colors[c[y]].otherColors[c[x]]) {
				colors[c[y]].cntDifferent++;
				colors[c[y]].otherColors[c[x]] = true;
			}
		}
	}
	
	sort(c + 1, c + n + 1);

	int maxCnt = -1, ansColor;
	for(int i = 1; i <= n; i++) {
		if(colors[c[i]].cntDifferent > maxCnt) {
			maxCnt = colors[c[i]].cntDifferent;
			ansColor = c[i];
		}
	}

	cout << ansColor << endl;
	return 0;
}
