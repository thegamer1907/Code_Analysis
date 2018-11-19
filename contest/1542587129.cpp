#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef long long ll;
const int MAXN = 100500;

bool last[1000];
bool first[1000];

int main()
{                                                     
	ios_base::sync_with_stdio(0);
	string passwd;
	cin >> passwd;

	bool ok = false;
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++)	
	{
		string s;
		cin >> s;
		ok |= s == passwd;
		last[s[1]] = true;
		first[s[0]] = true;
	}

	ok |= last[passwd[0]] && first[passwd[1]];
	cout << (ok ? "YES\n" : "NO\n");
	return 0;
}
