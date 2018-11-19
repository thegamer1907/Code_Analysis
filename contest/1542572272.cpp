#define _CRT_SECURE_NO_WARNINGS 
#include<bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
#define sz(v) ((int)(v).size())
#define clr(v, d)		memset(v, d, sizeof(v))
#define JSE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;

int main()
{
	JSE;
	string a;
	cin >> a;
	int n;
	cin >> n;
	vector<string >v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	bool ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string s = v[i] + v[j];
			if (s.find(a) != string::npos)
			{
				ans = 1;
				break;
			}
		}
	}
	if (ans)
		cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}