#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long n, k;
	cin >> n >> k;

	long long st = 1;
	long long en = (1LL << n) - 1;
	
	while (st < en)
	{
		long long mid = (st + en) / 2;
		
		if (k < mid)
			en = mid - 1;
		else if (k > mid)
			st = mid + 1;
		else
			break;

		--n;
	}

	cout << n;

	return 0;
}