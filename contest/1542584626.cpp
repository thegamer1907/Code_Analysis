#include <bits/stdc++.h>
using namespace std;
#define rg register

string s, str;
int n;
int wh1, wh2;

double x[10];

int Check(int x1)
{
	int ans1;
	if(x1 > x[2])
		ans1 = 2;
	else if(x1 < x[2] && x1 > x[1])
		ans1 = 1;
	else if(x1 < x[1] && x1 > x[0])
		ans1 = 0;
	else
		ans1 = 2;	
	return ans1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double h, m, s;
	int t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	x[0] = 30 * h + m / 2 + s / 120;
	x[1] = 6 * m + s / 360;
	x[2] = 6 * s;
	sort(x, x + 3);
	double x1 = t1 * 30;
	double x2 = t2 * 30;
	if(Check(x1) == Check(x2))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}