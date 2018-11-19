#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int main()
{

	int x, f = 0,n=0;
	string s1, s;
	cin >> s1;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> s;
		if (s1[0] == s[1]||s1[0]==s[1]&&s1[1]==s[0]||s1[0]==s[0]&&s1[1]==s[1])
			f+=1;
		if (s1[1] == s[0] || s1[0] == s[1] && s1[1] == s[0] || s1[0] == s[0] && s1[1] == s[1])
			n+=1;
	}
	if (f >= 1&&n>=1)
		cout << "YES\n";
	else
		cout << "NO\n";


}

