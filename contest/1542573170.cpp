#include <bits/stdc++.h>
using namespace std;
int main()
{
	set <char> f1;
	set <char> s1;
	int n,i,j;
	char a[2],b,c,s[101],f[101];
	cin >> a >> n;
	for (i=1;i<=n;i++)
	{
		cin >> b >> c;
		s[i]=c;
		f[i]=b;
		f1.insert(b);
		s1.insert(c);
	}
	for (i=1;i<=n;i++)
	{
		if (f[i]==a[0] && s[i]==a[1]){cout <<"YES";return 0;}
	}
//	if (f1.find(a[0])!=f1.end() && s1.find(a[1])!=s1.end()){cout << "YES";return 0;}
	if (f1.find(a[1])!=f1.end() && s1.find(a[0])!=s1.end()){cout << "YES";return 0;}
	cout << "NO";
}