/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 500 + 10;
bool mark[MAX_N][MAX_N];
char A[MAX_N][MAX_N];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt;

bool emp_cell(int x, int y) {
	return ~x && ~y && A[x][y] == '.';
}

void dfs(int x, int y) {
	mark[x][y] = true, cnt--;
	for (int i = 0; i < 4 && cnt; i++) {
		int a = x + dx[i], b = y + dy[i];
		if (emp_cell(a, b) && !mark[a][b])
			dfs(a, b);
	}
}

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

	int n, m, k;
	cin >> n >>	m >> k;

	int x = 0, y = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
			if (A[i][j] == '.')
				cnt++, x = i, y = j;
		}
	cnt -= k, dfs(x, y);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] == '#')
				cout << '#';
			else if (mark[i][j])
				cout << '.';
			else
				cout << 'X';
		}
		cout << endl;
	}

	return 0;
}
