#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#define pb push_back
#define pob pop_back
#define mp make_pair
#define PII pair<int , int>
#define PI 3.14159265
#define PQ priority_queue
#define lowbit(x) ((x) & (-x))
#define DEBUG printf("Passing [%s] in LINE %d...\n" , __FUNCTION__ , __LINE__)

typedef long long ll;
using namespace std;

const int maxn = 100000 + 10;
int dp[maxn] , n , a[maxn];
int main(){
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++){
		dp[i] = (a[i] > a[i - 1]) ? dp[i - 1] + 1 : 1;
	}
	
	int mx = 0;
	for(int i = 1;i <= n;i++) mx = max(mx , dp[i]);
	cout << mx;
	return 0;
}
