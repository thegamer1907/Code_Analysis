#include <stdio.h>
#include <cstring>
#include <vector>
#include <string>
#include <utility>
#include <iostream>

using namespace std;

typedef pair <int, pair<int, bool> > pii;

int n;
char s[110];

int main()
{
	scanf("%s", s + 1); n = strlen(s + 1);
	
	for (int i = 1; i <= n; i++)
		if (s[i] == '0') { puts("YES\n0"); return 0; }
		
	vector<vector<bool>> dp(10, vector<bool>(n + 2));
	vector<vector<pii>> pred(10, vector<pii>(n + 2));
	
	dp[(s[1] - 48) % 8][1] = true; 
	pred[(s[1] - 48) % 8][1] = {0, {(s[1] - 48) % 8, true}};
	
	for (int i = 2; i <= n; i++) {
		
		for (int j = 0; j < 8; j++)
			if (dp[j][i - 1]) { dp[j][i] = true; pred[j][i] = {i - 1, {j, false}}; }
		
		for (int j = 0; j < 8; j++)
			if (dp[j][i - 1]) { dp[(j * 10 + (s[i] - 48)) % 8][i] = true; pred[(j * 10 + (s[i] - 48)) % 8][i] = {i - 1, {j, true}}; }
		
		dp[(s[i] - 48) % 8][i] = true; pred[(s[i] - 48) % 8][i] = {0, {(s[i] - 48) % 8, true}};
	}
	
	if (!dp[0][n]) { puts("NO"); return 0; }
	
	puts("YES");
	
	string answer = "";
	
	int x = n;
	int rest = 0;
	
	while (x != 0) {
		
		//printf("--- %d\n", x);
		
		if (pred[rest][x].second.second) answer = s[x] + answer;
		
		int last = x;
		
		x = pred[rest][last].first;
		rest = pred[rest][last].second.first;
	}
	
	cout << answer;
	
	return 0;
}