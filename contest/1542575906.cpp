#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
	int h, m, s, T1,T2;
	cin >> h >> m >> s >> T1 >> T2;
	h%= 12;
	double o1, o2, o3;
	bool flag = false;
	o1 = h*30 + 0.5*m + 1.0 / 120 * s;
	o2 = m * 6+0.1*s;
	o3 = s * 6;
	double t1 = T1 * 30, t2 = T2 * 30;
	double tn1, tn2, tn3;
	tn1 = max(o1, max(o2, o3));
	tn3 = min(o1, min(o2, o3));
	tn2 = o1 + o2 + o3 - tn1 - tn3;
	if (tn3 <= t1&&t1 <= tn2&&tn3 <= t2&&t2 <= tn2)flag = true;
	if (tn2 <= t1&&t1 <= tn1&&tn2 <= t2&&t2 <= tn1)flag = true;
	if ((tn1 <= t1 || t1 <= tn3) && (tn1 <= t2 || t2 <= tn3))flag = true;
	if (flag)cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}