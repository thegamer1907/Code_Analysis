#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <set>
#include <iomanip>
using namespace std;

int gcd(int a, int b) {
	while (b) {
		a%=b;
		swap(a,b);
	}
	return a;
}

int main() {
	string s;
	cin >> s;
	for (int i = 0;i < s.length();++i)
	{
		if ((s[i] - '0') % 8 == 0)
		{
			cout << "YES\n";
			cout << s[i];
			return 0;
		}
		for (int j = i+1;j < s.length();++j)
		{
			if (((s[i] - '0') * 10 + (s[j] - '0') ) % 8 == 0)
			{
				cout << "YES\n";
				cout << s[i] << s[j];
				return 0;
			}
			for (int k = j+1;k < s.length();++k)
			{
				if (((s[i] - '0') * 100 + (s[j] - '0') * 10 + s[k] - '0') % 8 == 0)
				{
					cout << "YES\n";
					cout << s[i] << s[j] << s[k];
					return 0;
				}
			}
		}
	}
	cout << "NO";
	return 0;
}