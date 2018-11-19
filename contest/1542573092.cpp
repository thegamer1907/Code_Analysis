#include <bits/stdc++.h>

#define F first
#define S second
#define mp make_pair 
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define pii pair < int , int >

using namespace std;

typedef long long ll;

int h, m, s, t1, t2, a[99];

main () {               	
	cin >> h >> m >> s >> t1 >> t2;
	if (m == 0) m = 60;
	if (s == 0) s = 60; 
	a[h * 5] = a[m] = a[s] = 1;
	if (t1 > t2) swap (t1, t2);
	bool ok = 0;

	for (int i = t1 * 5 + 1;i < t2 * 5;i ++)  
		if (a[i] == 1) ok = 1;
	if (t1 == h) 
		if (m != 60) ok = 1;
		else if (s != 60) ok = 1;
	if (t1 * 5 == m && s != 60) ok = 1;			
	if (!ok) return cout << "YES", 0;
	ok = 0;
	for (int i = 1;i < t1 * 5;i ++)
		if (a[i] == 1) ok = 1;
	for (int i = t2 * 5 + 1;i <= 60;i ++)
		if (a[i] == 1) ok = 1;
	if (t2 == h)
		if (m != 60) ok = 1;
		else if (s != 60) ok = 1;
	if (t2 * 5 == m && s != 60) ok = 1;	
	if (!ok) return cout << "YES", 0;
	cout << "NO";

return 0;       
}
            
