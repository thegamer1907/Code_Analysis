//besme taala
//ya_hossein
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	int t = 0, s1 = 0, s2 = 0, s3 = 0;
	cin >> a;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> b;
		if(b == a)
		{
			cout << "YES";
			return 0;
		}
		if(b[0] == a[1])
		{
			s1++;
		}
		if(b[1] == a[0])
		{
			s2++;
		}
	}
		if(s1 >= 1 && s2 >= 1)
		{
			cout << "YES";
		}
		else
		cout << "NO";
}