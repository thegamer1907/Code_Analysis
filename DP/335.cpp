#include <bits/stdc++.h>
using namespace std;
int a[10000], b[10000];
int main()
{
	int boys, girls;
	int result = 0;
	cin >> boys; for (int i = 0; i < boys; i++) {cin >> a[i];}
	cin >> girls; for (int i = 0; i < girls; i++) {cin >> b[i];}

	sort(a, a + boys);
	sort(b, b + girls);
	
	for (int i = 0; i < boys; i++)
	{
		for (int j = 0; j < girls; j++)
		{
			if (abs(a[i] - b[j]) <= 1)
			{
				b[j] = 1000;
				result++;
				break;
			}
		}
	}

	cout << result << endl;
	return 0;
}
