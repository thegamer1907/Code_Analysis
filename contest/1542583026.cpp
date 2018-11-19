#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair < int, int >
#define pll pair < ll, ll >

using namespace std;

ll h, m, s, t1, t2; 
  
int main(){	    
	#ifdef LOCAL
		freopen("in", "r", stdin);
		freopen("out", "w", stdout);
	#endif
	cin >> h >> m >> s >> t1 >> t2;
	h %= 12;
	t1 %= 12;
	t2 %= 12;
	int cnt = 0;
	if (t1 > t2)
		swap(t1, t2);
	if (h >= t1 && h < t2)
		cnt++;
	if (m / 5 >= t1 && m / 5 < t2)
		cnt++;
	if (s / 5 >= t1 && s / 5 < t2)
		cnt++;
	cnt %= 3;
	if (cnt == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;	
}