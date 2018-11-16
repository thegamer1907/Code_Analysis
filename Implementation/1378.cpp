#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




int main()
{
	int n, t;
	string s;
	scanf("%d %d",&n,&t);
	cin >> s;
	for (int k = 0; k < t; ++k)
	{

		for (int i = 0; i < s.length() - 1; ++i)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				swap(s[i], s[i + 1]);
				++i;
			}
		}
	}

	cout << s;
}