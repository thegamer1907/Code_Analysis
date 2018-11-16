#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

typedef long long ll;
typedef long double ld;

#define int ll
#define all(x) x.begin(), x.end()

signed main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.precision(6);

	int n, a, b;
	cin >> n >> a >> b;
	vector <int> A(n);
	if(a > b)
		swap(a, b);
	for (int i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}
	vector <int> New;
	for (int round = 1; A.size() != 1; round++)
	{
		if (A.size() == 2)
		{
			if (A[0] == a && A[1] == b)
			{
				cout << "Final!";
				return 0;
			}
		}
		for (int i = 0; i < A.size(); i+=2)
		{
			if (A[i] == a && A[i + 1] ==  b)
			{
				cout << round;
				return 0;
			}
			if (A[i] == a || A[i + 1] == a)
			{
				New.push_back(a);
			}
			else if (A[i] == b || A[i + 1] == b)
			{
				New.push_back(b);
			}
			else
			{
				New.push_back(A[i]);
			}
		}
		A = New;
		New.clear();
	}
	return 0;
}