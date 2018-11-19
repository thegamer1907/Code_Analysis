#include<bits/stdc++.h>
using namespace std;
double h, m, s, t1, t2;
int main()
{
	cin >> h >> m >> s >> t1 >> t2;
	double pos1 = (h + m / 60 + s / 3600) / 12.0 * 360, pos2 = (m + s / 3600) / 60.0 * 360, pos3 = s / 60.0 * 360;
	t1 = t1 / 12 * 360;
	t2 = t2 / 12 * 360;
	if(t1 > t2) swap(t1, t2);
	if((pos1 <= t1 || pos1 >= t2) && (pos2 <= t1 || pos2 >= t2) && (pos3 <= t1 || pos3 >= t2)) 
	{
		puts("YES");
		return 0;
	}
	if(pos1 >= t1 && pos1 <= t2 && pos2 >= t1 && pos2 <= t2 && pos3 >= t1 && pos3 <= t2)
	{
		puts("YES");
		return 0;
	}
	puts("NO");
	return 0;
}