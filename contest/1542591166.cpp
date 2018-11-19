//In the name of Allah
#include <bits/stdc++.h>
#define fs first
#define sc second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=100, INF=1e7;
const double PI = 3.141592653589793238462643383279502884197, eps=1e-6;

bool check(string s, string t)
{
	for(unsigned int i=0 ; i<t.size()-1 ; i++)
		if(s[0]==t[i] && s[1]==t[i+1])
			return 1;

	return 0;
}

int main()
{
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n;
	string s;

	cin >> s >> n;

	string t[n];

	for(int i=0 ; i<n ; i++)
		cin >> t[i];

	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<n ; j++)
			if(check(s,t[i]+t[j]))
				return cout << "YES", 0;

	cout << "NO";

	return 0;
}
