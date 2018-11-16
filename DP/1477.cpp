#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
#include <iomanip>
#include <cmath>
#include <map>

int a[100001], c[100001];
bool u[100002];
using namespace std;
int main() {
	int n, m = 0, q = -1, p = 0;
	cin >> n;
	vector <long long> a(101);
	for (long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
		{
			p = max(p - 1, -1);
			m++;
		}
		else if (a[i] == 0)
		{
			p = max(p + 1, 1);
		}
		q = max(q, p);
	}
	cout << q + m;
	return 0;
}