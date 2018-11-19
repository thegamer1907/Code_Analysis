#define isws std::ios::sync_with_stdio(false)
#define _USE_MATH_DEFINES
#define ll long long int

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <math.h>
#include <bitset>
#include <queue>
#include <functional>
#include <list>
#include <set>
#include <limits.h>

using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef pair<int, int> PII;
const ll INF = 1000000007;

const int N = 100000 + 7;

typedef struct f
{
	long double angle;
	int idx;
}node;

node arr[7];
bool cmp(node a, node b)
{
	return a.angle < b.angle;
}

int main()
{
	isws;
	cin.tie(NULL);
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	for (int i = 0; i < 7; i++) arr[i].idx = i;
	arr[2].angle = (double)s / 5;
	if (s == 0) arr[2].angle = 12;
	if (s > 0) arr[1].angle = (((double)m * 1.0 / 5) + ((double)m + 1) / 5) / 2;
	else
	{
		arr[1].angle = (double)m / 5;
		if (m == 0) arr[1].angle = 12;
	}
	if (m > 0 || s > 0) arr[0].angle = h % 12 + 0.5;
	else arr[0].angle = h;
	arr[3].angle = t1;
	arr[4].angle = t2;
	/*for (int i = 0; i < 5; i++) cout << arr[i].angle << " ";
	cout << endl;*/
	sort(arr, arr + 5, cmp);
	if (arr[0].idx + arr[4].idx == 7)
	{
		cout << "YES\n";
		return 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (arr[i].idx + arr[i + 1].idx == 7)
		{
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}