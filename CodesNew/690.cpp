#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <queue>
#include <string>

using namespace std;
int main()
{
	int a1=0, a2=0,m,n,t=0;
	string c;
	cin >> m >> n;
	set<string> s;
	for (int i = 0; i < m; i++)
	{
		cin >> c;
		s.insert(c);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (s.find(c) != s.end())
			t++;
		else
			a2++;		
	}
	a1 = m - t;
	if (t % 2 == 1)
		a1++;
	if (a1 > a2) cout << "YES";
	else cout << "NO";
	getchar();
	getchar();
	return 0;
}
