#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, l, value;
	long double res;
	scanf("%d %d", &n, &l);
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}

	sort(a.begin(), a.end());


	for (int i = 1; i < n; ++i)
	{
		value = max(value, a[i]-a[i-1]);
	}

	if (a[0] != 0)
	{
		value = max(value, a[0]*2); 
	}
	
	if (a[n - 1] != l)
	{
		value = max(value, (l - a[n - 1])*2 );
	}
	res = value;

	printf("%.10Lf", res/2);

}


