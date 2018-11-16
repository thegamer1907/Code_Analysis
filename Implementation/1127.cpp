#include <iostream>
#include <string>
using namespace std;

int abs(int a)
{
	return a<0? a*-1 : a;
}

int main()
{
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int i = 0; i < t; i++)
	{
		for (int i = 0; i < n-1; i++)
		{
			/* code */
			if(s[i] == 'B' && s[i+1] == 'G')
			{
				s[i] = 'G';
				s[i+1] = 'B';
				i++;
			}
		}
	}

	cout << s << endl;

	return 0;
}