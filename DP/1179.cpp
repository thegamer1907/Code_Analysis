#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define r(i,s,l) for(int i=s;i<l;i++)

int main()
{
    int n; cin >> n;

	int counterone = 0, maxcount = -1, counter = 0;

	while (n--)
	{
		int i; cin >> i;
		if (i)
		{
			++counterone;
			if (counter)
			{
				--counter;
			}
		}
		else
		{
			++counter;
			maxcount = max(maxcount, counter);
		}
	}

	cout << counterone + maxcount;

    return 0;
}
