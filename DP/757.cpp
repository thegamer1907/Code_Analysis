#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[105];
	int i, j;
	int count = 0;
	for ( i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i])
			count++;
	}
	int max = -100;
	for ( i = 0; i < n; i++)
	{
		int count1 =0, count0 = 0;
		for (j = i; j < n; j++)
		{
			if (a[j] == 0)
				count0++;
			else
				count1++;
			if (max < count0 - count1)
				max = count0 - count1;
		}
	}
	if (n == 1)
	{
		if (a[0] == 1)
			cout << 0 << endl;
		else
			cout << 1 << endl;
	}
	else
	{
		cout << count + max << endl;
	}
}