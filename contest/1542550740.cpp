#include<bits/stdc++.h>
using namespace std;

int h, t1, t2;
int m, s;
const int MOD = 3600 * 12;

int main()
{
	cin >> h >> m >> s >> t1 >> t2;
	h *= 3600; t1 *= 3600; t2 *= 3600;
	h += m * 60 + s;
	m = m * 3600 / 5 + s;
	s = s * 3600 / 5;
	h %= MOD; m %= MOD; s %= MOD; t1 %= MOD; t2 %= MOD;
	
	for(int i = 0; i < 3600 * 12; ++ i)
	{
		if(t1 > t2)
			swap(t1, t2);
		if(h < t1 && m < t1 && s < t1)
		{
			cout << "YES" << endl;
			return 0;
		}
		if(h > t2 && m > t2 && s > t2)
		{
			cout << "YES" << endl;
			return 0;
		}
		if(h > t1 && h < t2)
		{
			if(m > t1 && m < t2)
			{
				if(s > t1 && s < t2)
				{
					cout << "YES" << endl;
					/*cout << t1 << " " << t2 << endl;
					cout << i << endl;
					cout << h << " " << m << " " << s << endl;*/
					return 0;
				}
			}
		}
		t1 ++; t2 ++; h ++; s ++; m ++;
		t1 %= MOD; t2 %= MOD; h %= MOD; m %= MOD; s %= MOD;
	}
	
	cout << "NO" << endl;
	
	return 0;
}
