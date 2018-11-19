#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;


int main()
{
	string  st, s;
	int n;
	bool flag = false;
	cin >> st >> n;
	int a1[200] = {}, a2[200] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		a1[int(s[0])] = 1;
		a2[int(s[1])] = 1;
		if (s == st)
			flag = true;
	}
	if ((a1[int(st[1])] == 1 && a2[int(st[0])] == 1) || flag)
		cout << "YES";
	else
		cout << "NO";
	//system("pause");
	return(0);
}