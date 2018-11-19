/*input
1 5 4 3 2
*/
#include <bits/stdc++.h>

using namespace std;

bool checkc(vector <int> &p, int x)	//check if p crosses a hand that is in [x, x + 1)
{
	int n = p.size();
	if (x < 12)
	{
		for (int i = 0; i < n - 1; i++)
			if (p[i] == x && p[i + 1] == x + 1)
				return 0;
	}
	else
	{
		for (int i = 0; i < n - 1; i++)
			if (p[i] == 12 && p[i + 1] == 1)
				return 0;
	}	
	return 1;
}

bool checkcc(vector <int> &p, int x)
{
	int n = p.size();
	if (x < 12)
	{
		for (int i = 0; i < n - 1; i++)
			if (p[i] == x + 1 && p[i + 1] == x)
				return 0;
	}
	else
	{
		for (int i = 0; i < n - 1; i++)
			if (p[i] == 1 && p[i + 1] == 12)
				return 0;
	}
}

inline int to12(int x)
{
	int y = x/5;
	if (y == 0)
		return 12;
	return y;
}

int h, m, s, t1, t2;

int main()
{
	ios::sync_with_stdio(false);
	cin>>h>>m>>s>>t1>>t2;

	vector <int> p1, p2;	//c, cc

	if (t1 > t2)
	{
		for (int i = t1; i <= 12; i++)
			p1.push_back(i);
		for (int i = 1; i <= t2; i++)
			p1.push_back(i);

		for (int i = t1; i >= t2; i--)
			p2.push_back(i);
	}
	else	//t1 < t2
	{
		for (int i = t1; i <= t2; i++)
			p1.push_back(i);

		for (int i = t1; i >= 1; i--)
			p2.push_back(i);
		for (int i = 12; i >= t2; i--)
			p2.push_back(i);
	}

	if (checkc(p1, h))
	{
		if (checkc(p1, to12(m)) && checkc(p1, to12(s)))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else if (checkcc(p2, h))
	{
		if (checkcc(p2, to12(m)) && checkcc(p2, to12(s)))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}