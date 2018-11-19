#include <stdio.h>
#include <stack>
#include <map>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <climits>
using namespace std;
#define ll long long
#define mp make_pair
//#define ld long double
const int mod = 1000000007;
int n, k;
int arr[100005];
bool vis[55];
int main() {
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		int val = 0;
		for (int j = k - 1; j >= 0; j--) {
			int t;
			scanf("%d", &t);
			val += (t << j);
		}
		arr[i] = val;
		vis[val] = true;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 32; j++)
		if (vis[j] && (j&arr[i])==0) {
			cout << "yes\n";
			return 0;
		}
	}
	cout << "no\n";
	return 0;
}