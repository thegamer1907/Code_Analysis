
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s1, s2;
	int n, b = 0, c = 0, a = 0;
	cin>>s1;
	cin >>  n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> s2;
		if (s2 == s1)
			a++;
		else if (s2[0] == s1[1])
			c++;
		if (s2[1] == s1[0])
			b++;
	}
	if ((b >= 1 && c >= 1) || a >= 1)
		cout << "YES";
	else
		cout << "NO";
//system("pause");
return 0;
}