#include <bits/stdc++.h>
using namespace std;
int main ()
{
	string s;
	int flag, n, i;
	cin >> s;
	scanf ("%d", &n);
	string wrds[n];
	vector <int> front, rear;
	flag = 0;
	for (i=0; i<n; i++)
	{
		cin >> wrds[i];
		if (wrds[i]==s)
		{
			flag = 1;
			break;
		}
		if (wrds[i][1]==s[0])
			front.push_back(i);
		if (wrds[i][0]==s[1])
			rear.push_back(i);
	}
	if (front.size()>0 && rear.size()>0)
		flag = 1;
	if (flag)
		printf ("YES");
	else
		printf ("NO");
	return 0;
}