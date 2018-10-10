#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <string>
#include <map>
#include <unordered_map>
#include <functional>
#define X first
#define Y second
#define MOD 1000000007
#define INF 1987654321
#define ABS(x) ((x) > 0 ? (x) : -(x))
using namespace std;

typedef long long lint;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main()
{
	int n;
	scanf("%d", &n);

	int arr[100000];
	for (int i = 0; i < n; ++i) scanf("%d", arr + i);

	int ans, v, min = INF;
	for (int i = 0; i < n; ++i)
	{
		v = (arr[i] - i + n - 1) / n;
		if (v < min) min = v, ans = i + 1;
	}

	printf("%d", ans);

	return 0;
}