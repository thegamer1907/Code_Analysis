#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	string s, n;
	cin >> s;
	int m,a=0,b=0,c=0; cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> n;
		if (n[1] == s[0])
			a++;
		if (n[0] == s[1])
			b++;
		if (n == s)
			c++;
	}
	
	if ((a> 0&&b>0)||(m==1&&n==s )||c>0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}