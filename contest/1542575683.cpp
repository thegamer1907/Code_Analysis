#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define vi vector<int>
#define ii pair<int, int>
#define INF 2147483647//2^31-1
#define INFLL 9223372036854775807//2^63-1
#define MOD 1000000009
#define debug(x) cerr << fixed << #x << " is " << x << endl;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s, aux;
	int n;
	cin >> s >> n;
	bool first = 0, second = 0;

	while(n--)
	{
		cin >> aux;
		if(aux[1] == s[0])
			first = 1;
		if(aux[0] == s[1])
			second = 1;
		if(aux == s)
		{
			first = 1;
			second = 1;
		}
	}

	cout << (first && second ? "YES" : "NO") << endl; 

	return 0;
}