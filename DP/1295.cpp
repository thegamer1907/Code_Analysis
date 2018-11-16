#include<iostream>
#include<string>
#include<algorithm>
//#include<time.h>
//#include<math.h>
//#include <iomanip>
//#include<queue>
using namespace std;
int main()
{
	int n, *a, cnt1 = 0, cnt0 = 0, Max = -1;
	cin >> n;
	a = new int[n + 1];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			cnt1++;
			if (cnt0 > 0) cnt0--;
		}
		else
		{
			cnt0++;
			Max = max(Max, cnt0);
		}
	}
	cout << Max + cnt1;
	//system("pause");
	return 0;
}