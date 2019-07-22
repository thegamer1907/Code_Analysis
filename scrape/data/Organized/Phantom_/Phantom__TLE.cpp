#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
#include<set>
#include<deque>
using namespace std;

#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>
const int MAX = 1e5 + 10;
ll arr[MAX];

int main() {
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	ll n, k, x, a,m, b, count = 0;	
	cin >> n >> m >> k;
	int now = 1, r, ans = 0, sum=0;
	//vector<ll> arr(m + 1);
	for (int i = 1; i <= m; i++) 
		cin >> arr[i];
	while (now <= m) {
		r = ((arr[now] - sum-1) / k+1) * k + sum;
		while (now <= m && arr[now] <= r ) {
			now++;
			sum++;
		}
		ans++;
	}
	cout << ans << endl;


	return 0;
}