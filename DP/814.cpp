#include <bits/stdc++.h>
#define FOR0(i,n) for (int i = 0; i < n; i++)
#define FOR(i,j, n) for (int i = j; i < n; i++)

using namespace std;

//codeforces
//327A

int main()
{
	int n;
	cin>>n;

	int a[101];

	int total_one = 0;
	int curr_one, curr_zero;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];

		if(a[i]==1)
			total_one++;
	}

	int result = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			curr_zero = 0, curr_one = 0;
			for (int k = i; k <= j; ++k)
			{
				if(a[k]==1)
					curr_one++;
				else
					curr_zero++;
			}

			result = max(total_one-curr_one+curr_zero, result);
		}
	}
	cout<<result<<endl;
}
