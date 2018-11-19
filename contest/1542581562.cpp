#include<bits/stdc++.h>


using namespace std;

int was[3600 * 12 + 5];

int all = 3600 * 12;

int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h = (h % 12) * 3600 + m * 60 + s;
	
	t1 = (t1 % 12) * 3600;
	t2 = (t2 % 12) * 3600;
	
	m = m * (3600 / 5) + s * (3600 / 5 / 60);
	s = s * (3600 / 5);
	was[h] = 1;
	was[m] = 1;
	was[s] = 1;
	cerr << h << " " << m << " " << s << "\n";
	int i;
	for(i = t1; was[i] == 0 && i != t2; i = (i + 1) % all );
	if(i == t2)
	{
		cout << "YES";
		exit(0);
	}
	
	for(i = t1; was[i] == 0 && i != t2; i = (i  - 1 + all) % all );
	if(i == t2)
	{
		cout << "YES";
		exit(0);
	}
	

	
	cout << "NO";	
}