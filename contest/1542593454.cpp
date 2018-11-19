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
string arr[110];

int main()
{
	isws;
	cin.tie(NULL);
	string s;
	cin >> s;
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == s)
		{
			cout << "YES\n";
			return 0;
		}
	}
	int j;
	for (i = 0; i < n; i++)
	{
		if (arr[i][1] == s[0])
		{
			for (j = 0; j < n; j++)
			{
				if (arr[j][0] == s[1])
				{
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
	return 0;
}