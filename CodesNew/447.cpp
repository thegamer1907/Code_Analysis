#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[100100];
	int n , m , ans=0;
	cin >> n >> m;
	for ( int i =0;i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	for ( int r =0,l=0;r < n; ++r)
	{
		sum += a[r];
		while (sum > m )
		{
			sum -=a[l];
			++l;
		}
		ans = max(ans, r-l+1);
	}
	cout << ans << endl;
    
    return 0;
}