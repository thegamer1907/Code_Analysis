#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
using namespace std;

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

const int MAX = 505;
char a[MAX][MAX];
bool vis[MAX][MAX];

int n, m, k;

bool valid(int i, int j) {
	return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.';
}

void dfs(int i, int j) {
	if (!valid(i,j) || vis[i][j]) return;
	vis[i][j] = true;
	for (int k = 0; k < 4; k++) {
		int tox = dx[k] + i;
		int toy = dy[k] + j;
		dfs(tox,toy);
	}
	if (k)
		a[i][j] = 'X', k--;
}

int main() {

//	freopen("input.txt", "r", stdin);
	
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!vis[i][j] && a[i][j] == '.')
				dfs(i, j);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j];
		cout << endl;
	}

	
	return 0;
}