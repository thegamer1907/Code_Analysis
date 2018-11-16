#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include <numeric>
#include<sstream>
#include<valarray>
#include<map>
#include<set>
#include<stack>
#include<queue>
long long fact(long long x)
{
	if (x <= 0)
		return 1;
	return x* fact(x - 1);
}
using namespace std;
int main()
{
	bool arr[100001] = { false };
	int x, y,s,c=1;
	cin >> x >> y;
	vector<int>v;
	deque<int>d;
	for (int i = 0; i < x; i++)
	{
		cin >> s;
		v.push_back(s);
	}
	for (int i = v.size()-1; i >= 0; i--)
	{
		if (i == v.size()-1)
		{
			d.push_front(c);
			arr[v[i]] = true;
		}
		else
		{
			if (arr[v[i]]==true)
			{
				d.push_front(c);
			}
			else
			{
				c++;
				d.push_front(c);
				arr[v[i]] = true;
			}
		}
	}
	//for (int i = v.size()-2; i >=0; i--)
	//{
	//		if (find(v.begin()+i+1,v.end(),v[i])!=v.end())
	//			d.push_front(c);
	//		else
	//		{
	//			c++;
	//			d.push_front(c);	
	//		}
	//	}
	for (int i = 0; i < y; i++)
	{
		cin >> s;
		cout << d[s-1] << "\n";
	}
}