#include <bits/stdc++.h>

using namespace std;

int main ()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(5);
	a.push_back(10);
	a.push_back(20);
	a.push_back(100);
	int x;
	cin >> x;
	int cnt = 0;
	while (x > 0)
	{
		int j = upper_bound(a.begin(),a.end(),x) - a.begin();
		x -= a[j-1];
		//cout << j-1 <<ends<< a[j-1] <<ends<< x << endl; 
		cnt ++;
	}
	cout << cnt << endl;
	return 0;
 } 
