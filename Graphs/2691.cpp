#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX_N = 505;
const int MAX_M = 505;

const int ROW_MOVES[] = { -1, 0, 1, 0 };
const int COL_MOVES[] = { 0, 1, 0, -1 };

bool isVisited[MAX_N][MAX_M];
char board[MAX_N][MAX_M];
int n, m;
queue< pair< int, int > > q; 

void Dfs(int row, int col) {
	isVisited[row][col] = true;

	for(int i = 0; i < 4; i++) {
		int newRow = row + ROW_MOVES[i];
		int newCol = col + COL_MOVES[i];

		if(newRow > 0 && newRow <= n && newCol > 0 && newCol <= m) {
			if(board[newRow][newCol] == '.' && !isVisited[newRow][newCol]) {
				Dfs(newRow, newCol);
			}
		}
	}

	q.push({ row, col });
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> n >> m >> k;

	int rowInd = -1, colInd = -1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> board[i][j];
		
			if(board[i][j] == '.') {
				rowInd = i;
				colInd = j;
			}
		}
	}

	if(rowInd != -1 && colInd != -1) {
		Dfs(rowInd, colInd);

		for(int i = 0; i < k; i++) {
			int row = q.front().first, col = q.front().second;
			q.pop();

			board[row][col] = 'X';
		}
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}

	return 0;
}

