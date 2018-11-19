#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <utility>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

// ans = a ? b : c; // to simplify: if (a) ans = b; else ans = c;

int main(int argc, char const *argv[])
{
	int n;
	string s, k[110];
	bool f = false, l = false;

	cin >> s >> n;

	for(int i=0; i<n; i++)
	{
		cin >> k[i];

		if(!s.compare(k[i]))
		{
			cout << "YES" << endl;
			return 0;
		}

		if(k[i][0] == s[1]) l = true;
		if(k[i][1] == s[0]) f = true;

		if(f && l)
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}
