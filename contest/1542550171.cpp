#include<iostream>
#include<string>
using namespace std;
int main()
{
		string s, s1;
		int x;
		cin >> s >> x;
		int a = 0, b = 0;
		for (int i = 0; i < x; i++)
		{
			cin >> s1;
			if (s1[0] == s[1])
				a++;
			if (s1[1] == s[0])
				b++;
			if (s1[0] == s[0] && s1[1] == s[1])
			{
				a += 2;
				b+=2;
			}
		}
		if (a+b >= 2&&a!=0&&b!=0)
			cout << "YES\n";
		else
			cout << "NO\n";
}