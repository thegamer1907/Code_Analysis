#define v vector
#define vv vector<v>
#define pll pair<long long, long long>
#define ll long long 
#define pb push_back
#define mp make_pair
#define loop(i, n) for(long long i = 0; i < n; i++)
#define x first
#define y second

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <set>
#include <unordered_set>
#include <math.h>
using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n, m;
	cin >> n >> m;
	if (n >= m)
		cout << n - m;
	else{
		vector<bool> dp(15000, true);
		ll turn = 0;
		queue<pll> q;
		q.push({n, 0});
		dp[n] = false;
		bool ans = false;
		while (!q.empty() && !ans){
			ll nowNum = q.front().x, turn = q.front().y;
			q.pop();
			if (nowNum == m){
				cout << turn;
				ans = true;
			}
			if (nowNum - 1 > 0 && dp[nowNum - 1])
				q.push({nowNum - 1, turn + 1}), dp[nowNum - 1] = false;
			if (nowNum * 2 < 15000 && dp[nowNum * 2])
				q.push({2 * nowNum, turn + 1}), dp[2 * nowNum] = false;
		}
	}

	return 0;
}