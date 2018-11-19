#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pii pair < int , int >
#define pipii pair < int , pii >
#define pid pair <int, double>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pp pop_back()
#define sz size()
#define iz insert
#define lg length()
#define FRNAME "A"
#define inf (int)1e6
#define fr freopen(FRNAME".in","r",stdin); freopen (FRNAME".out","w",stdout);
#define fr2 freopen("input.txt","r",stdin); freopen ("output.txt","w",stdout)
char x, y;
int a, b, c, d;
int main ()
{
	cin >> x >> y;
	int n;
	cin >> n;
	for (int i = 1 ;i <= n; i++)
	{
		char q, w;
		cin >> q >> w;
//		cout << q << " "<< w << "!" << endl;
		if(q == x && w == y)
		{
			cout << "YES";
			return 0;
		}	
		if(q == y)
		{
			a++;
//			cout << "@";
		}
		if(w == x)
		{
			c++;
//			cout << "#";
		}
	}
	if(a > 0 && c > 0) cout << "YES";
	else cout << "NO"; 	
	return 0;
}
