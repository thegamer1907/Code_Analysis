#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{


	int n;
	cin >> n;
	int arr[n+1];
	arr[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		arr[i] = x + arr[i-1];
	}

	
	int m;
	cin >> m;
	for(int i = 0; i < m ; i++)
	{
		int q;
		cin >> q;
		int lo = 1, high = n;
		while(lo < high)
		{
			if(high - lo == 1)
			{
				if(arr[lo] < q)
					lo = high;
				else
					high = lo;
			}
			if(arr[(lo+high)/2] > q)
				high = (lo + high)/2;
			else
				lo = (lo + high)/2;
		}
		cout << lo << endl;
	}

	return 0;
}