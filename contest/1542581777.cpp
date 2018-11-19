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

int arr[N][5];

int main()
{
	isws;
	cin.tie(NULL);
	int n, k;
	int i, j;
	int gk = 0;
	cin >> n >> k;
	for (i = 0; i < n; i++)
	{
		int temp[5];
		int sum = 0;
		for (j = 0; j < k; j++)
		{
			cin >> temp[j];
			sum += temp[j];
		}
		if (sum == 0)
		{
			cout << "YES\n";
			return 0;
		}
		bool flag = true;
		for (j = 0; j < gk; j++)
		{
			bool iflag = true;
			for (int z = 0; z < k; z++)
			{
				if (temp[z] != arr[j][z]) iflag = false;
			}
			if (iflag)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			gk++;
			for (int z = 0; z < k; z++)
			{
				arr[gk][z] = temp[z];
			}
		}
	}
	for (i = 1; i < gk; i++)
	{
		bool flag = false;
		for (j = i + 1; j <= gk; j++)
		{
			bool iflag = true;
			for (int z = 0; z < k; z++)
			{
				if (arr[i][z] + arr[j][z] > 1) iflag = false;
				//else cout << arr[i][z] << " " << arr[j][z] << endl;
			}
			if (iflag)
			{
				flag = true;
				break;
			}
		}
		if (flag)
		{
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}