#define isws std::ios::sync_with_stdio(false)
#define _USE_MATH_DEFINES
#define ll long long int

//#include <bits / stdc++.h>
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
#include <sstream>

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

int arr[N];

int main()
{
	isws;
	cin.tie(NULL);
	int n;
	cin >> n;
	rep(i, 1, n+1)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	int m;
	cin >> m;
	while (m--)
	{
		int t;
		cin >> t;
		int idx = lower_bound(arr, arr + n + 1, t) - arr;
		cout << idx << endl;
	}
	return 0;
}