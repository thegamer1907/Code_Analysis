#include<iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int n, i, s = 0, t, j;
	char temp;
	string o;
	cin >> n >> t;
	cin >> o;
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < o.size() - 1; j++)
		{
			if (o[j] == 'B' && o[j + 1] == 'G')
			{
				o[j] = 'G';
				o[j + 1] = 'B';
				j++;
			}
		}
	}
	cout << o;
	return 0;
}