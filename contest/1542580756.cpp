#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <cstdlib>
#include <stdio.h>
#include <functional>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long double h, m, s, t1, t2; 

	cin >> h >> m >> s >> t1 >> t2;
	if (h == 12) h = 0.0;
	if (t1 == 12) t1 = 0.0;
	if (t2 == 12) t2 = 0.0;
	long double gh = ((h) / 12.0) * 360 + ((m) / 60.0) * 6.0 + ((s) / 60.0)*(360.0 / (12.0 * 60.0));
	long double gm = (m / 60.0) * 360 + ((s) / 60.0) * 6.0;
	long double gs = (s / 60.0) * 360;
	long double gt1 = ((t1) / 12.0) * 360;
	long double gt2 = ((t2) / 12.0) * 360;
	int y1 = 0, y2 = 0;
	if (gh < gm)
	{
		if (gt1 >= gh && gt1 <= gm) y1 = 1;
		if (gt2 >= gh && gt2 <= gm) y2 = 1;
		if (y1 != y2){
			cout << "NO"; return 0;
		}
	}
	else
	{
		if (gt1 >= gm && gt1 <= gh) y1 = 1;
		if (gt2 >= gm && gt2 <= gh) y2 = 1;
		if (y1 != y2){
			cout << "NO"; return 0;
		}
	}
	y1 = 0; y2 = 0;
	if (gh < gs)
	{
		if (gt1 >= gh && gt1 <= gs) y1 = 1;
		if (gt2 >= gh && gt2 <= gs) y2 = 1;
		if (y1 != y2){
			cout << "NO"; return 0;
		}
	}
	else
	{
		if (gt1 >= gs && gt1 <= gh) y1 = 1;
		if (gt2 >= gs && gt2 <= gh) y2 = 1;
		if (y1 != y2){
			cout << "NO"; return 0;
		}
	}
	y1 = 0; y2 = 0;
	if (gm < gs)
	{
		if (gt1 >= gm && gt1 <= gs) y1 = 1;
		if (gt2 >= gm && gt2 <= gs) y2 = 1;
		if (y1 != y2){
			cout << "NO"; return 0;
		}
	}
	else
	{
		if (gt1 >= gs && gt1 <= gm) y1 = 1;
		if (gt2 >= gs && gt2 <= gm) y2 = 1;
		if (y1 != y2){
			cout << "NO"; return 0;
		}
	}
	y1 = 0; y2 = 0;
	cout << "YES";
	//system("pause");
	return 0;
}