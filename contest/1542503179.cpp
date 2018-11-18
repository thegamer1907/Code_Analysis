#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1, s2;
	int n, y = 0, z = 0, x = 0;
	cin >> s1 >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> s2;
		if (s2 == s1)
			x++;
		else if (s2[0] == s1[1])
			z++;
		if (s2[1] == s1[0])
			y++;
	}
	if ((y >= 1 && z >= 1) || x >= 1)
		cout << "YES";
	else
		cout << "NO";
		
	return 0;
}