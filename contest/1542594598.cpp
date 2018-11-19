#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair < int, int >
#define pll pair < ll, ll >

using namespace std;

string s, d;
int n, a[300], b[300]; 
  
int main(){	    
	#ifdef LOCAL
		freopen("in", "r", stdin);
		freopen("out", "w", stdout);
	#endif
	cin >> s >> n;
	while (n--){
		cin >> d;
		if (s == d){
			cout << "YES";
			return 0;	
		}
		a[d[0]] = true;
		b[d[1]] = true;	
	}
	if (a[s[1]] && b[s[0]])
		cout <<"YES";
	else
		cout << "NO";
	return 0;	
}