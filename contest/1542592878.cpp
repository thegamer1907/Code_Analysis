#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define int long long
#define endl '\n'
#define pi acos(-1)
#define pque priority_queue
#define N 1000000
#define lmax LONG_LONG_MAX
typedef pair < int, int > ii;
typedef vector < int > vi;
typedef vector < vi > vii;
int mod = 1000000007;
string s, a[200];
int n, check0 = 0, check1 = 0;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin >> s;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(a[i][0] == s[0] && a[i][1] == s[1])
		{
			cout << "YES";
			return 0;
		}
		if(a[i][0] == s[1])
			check1 = 1;
		if(a[i][1] == s[0])
			check0 = 1;
	}
	if(check1 == 1 && check0 == 1)
		cout << "YES";
	else
		cout << "NO";
}

