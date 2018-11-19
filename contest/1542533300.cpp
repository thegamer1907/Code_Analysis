#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("input.in", "r", stdin);
	double h, m, s, t1, t2;
	scanf("%lf %lf %lf %lf %lf", &h, &m, &s, &t1, &t2);
	h += m/60 + s/3600;
	m = m + s/60;
	m /= 5;
	s = s/5;
	if(h > 12) h -= 12;
	if(t1 > 12) t1 -= 12;
	if(t2 > 12) t2 -= 12;

	if(t1 > t2) swap(t2, t1);
	
	bool j1 = 1, j2 = 1;
	if((t1 < h && h < t2) || (t1 < s && s < t2) || (t1 < m && m < t2))
		j1 = 0;
	if((t1 > h || h > t2) || (t1 > s || s > t2) || (t1 > m || m > t2))
		j2 = 0;

	//printf("%lf %lf %lf\n", h, m, s);
	//cout << j1 << " " << j2 << "\n";
	if(j1 || j2)
		cout << "YES\n";
	else
		cout << "NO\n";
}




