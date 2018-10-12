#include <iostream>
#include <algorithm>
using namespace std;
int a[500005], n;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i ++)
		cin >> a[i];
	sort(a, a + n);
	int pnt1 = 0, pnt2 = n / 2;
	while( pnt2 < n && pnt1 < n / 2)
	{
		while (pnt2 < n  && a[pnt1] * 2 > a[pnt2])
			pnt2 ++;
		if (pnt2 < n )
			pnt1 ++;
		pnt2 ++;
	}	
	cout << n - pnt1 << endl;
	return 0;
}