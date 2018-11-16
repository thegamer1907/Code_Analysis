#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	int t;
	int i;
	long long int j;
	cin >> n >> t;
	char *str = new char[n + 1];
	cin >> str;
	for(i = 0; i < t; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(str[j] == 'B' && str[j + 1] == 'G')
			{
				char temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
				j++;
			}
		}
	}
	cout << str;

}