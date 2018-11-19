#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5+4;
typedef long long ll;
typedef pair<int, int> pii;

bool ar[60];

int main(){
#ifndef ONLINE_JUDGE
    freopen("C:/Users/Retracter/Desktop/input.txt", "r", stdin);
    // freopen("C:/Users/Retracter/Desktop/output.txt", "w", stdout);        
#endif
  	fill_n(ar, 60, true);
  	int h, m, s, t1, t2; 
  	cin >> h >> m >> s >> t1 >> t2;

  	h = (h * 5 + m / 15) % 60;
  	t1 = (t1 * 5) % 60;
  	t2 = (t2 * 5) % 60;

  	if(h == t1 || h == t2) h = (h+1) % 60;
  	if(m == t1 || m == t2) m = (m+1) % 60;
  	if(s == t1 || s == t2) s = (s+1) % 60;

  	ar[h] = ar[m] = ar[s] = false;

  	bool f1 = true, f2 = true;

  	for (int i = t1; ; i = (i+1)%60)
  	{
  		if(ar[i] == 0) f1 = false;
  		if(i == t2) break; 
  	}

  	for (int i = t2; ; i = (i+1)%60)
  	{
  		if(ar[i] == 0) f2 = false;
  		if(i == t1) break;
  	}
  	
  	if(f1 || f2) cout << "YES\n";
  	else cout << "NO\n";
    return 0;
}