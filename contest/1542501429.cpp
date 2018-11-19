#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n, t = 0, t1 = 0,t2=0;
	cin >> n;
	string s1;
	for (int i = 0; i < n; ++i)
	{
		cin >> s1;		
		if (s1[0] == s[0] && s1[1] == s[1])
			t2++;
			if (s1[0] == s[1])
				t++;
			if (s1[1] == s[0])
				t1++;
	}
	if (t + t1 >= 2&&t>=1&&t1>=1||t2>=1)cout << "YES" << "\n";
	else cout << "No" << "\n";
	return 0;
}