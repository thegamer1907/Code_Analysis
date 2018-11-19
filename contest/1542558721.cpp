#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
bool check(int t1, int t2, int h, int m, int s)
{
	int max_t1 = max(t1, t2);
	int min_t1 = min(t1, t2);
	double max_t = 1.0*max_t1;
	double min_t = 1.0*min_t1;

	double h1 = 1.0*m / 60 + h + 1.0*s / 60/60;
	if (m == 0)
		m = 60;
	double m1 = (1.0*m + 1.0*s / 60) / 60 * 12;
	if (s == 0)
		s = 60;
	if (h1 > 12)
		h1 -= 12;
	if (m1 > 12)
		m1 -= 12;
	double s1 = 1.0*s / 60 * 12;
	if (s1 > 12)
		s -= 12;
	//cout << s1;
	//cout << "h= " << h1 << " m= " << m1 << " s= " << s1;
	if (t2 == h1 || t2 == m1 || t2 == 12 && s1 == 12){
		//cout << "2";
		return false;
	}
	if (h1 >= max_t && h1 <= min_t + 12 || h1 <= min_t && h1 + 12 >= max_t)
	{
		if (m1 >= max_t && m1 <= 12 && m1 <= min_t + 12 || m1 >= 0 && m1 <= min_t && m1 + 12 >= max_t)
		{
			if (s1 > max_t && s1 <= 12 && s1 < min_t + 12 || s1>0 && s1<min_t && s1 + 12 > max_t){
				//cout << "1";
				return true;
			}
		}

	}
	//cout << h1;
	if (h1 >= min_t && h1 <= max_t)
	{
		if (m1 > min_t && m1 < max_t)
		{
			if (s1 > min_t && s1 < max_t){

				return true;
			}
		}
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(0);
	//freopen("input.inp", "rt", stdin);
	//freopen("output.out", "wt", stdout);

	int h, m, s, t1, t2;
	double m1, s1;
	cin >> h >> m >> s >> t1 >> t2;
	if (check(t1, t2, h, m, s))
		cout << "yes";
	else cout << "no";


}