#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long k, p = 0, j, sum = 0;
	cin >> k;
	vector <long long> a(10001);
	for(long long i = 1; i <= 11000000; ++i)
	{
		j = i;
		while(j > 0)
		{
			sum = sum + (j % 10);
			j = j / 10;
		}
		if(sum == 10)
		{
			a[p] = i;
			if(p == k)
			{
			cout << a[k-1] << endl;
            return 0;
            }
			++p;
		}
		sum = 0;
	}

	
	
}
