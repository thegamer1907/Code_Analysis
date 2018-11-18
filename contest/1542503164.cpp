#include <iostream>
#include <string>
using namespace std;
int main()
{
	char c;
	bool f = false,g=false;
	int n;
	string arr[100],s;
	cin >> s>>n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		c = arr[i].at(1);
		if (arr[i].find(s[0]) == 1 || (arr[i].at(0) == c && (arr[i].find(s[0])== 0 || arr[i].find(s[0]) == 1))||arr[i]==s)
			f = true;
		if (arr[i].find(s[1]) == 0 || (arr[i].at(0) == c && (arr[i].find(s[1]) == 1 || arr[i].find(s[1]) ==0 ))||arr[i]==s)
			g = true;
	}
	if (f == true && g == true)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;

}

