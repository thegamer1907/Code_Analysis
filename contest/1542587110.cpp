#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#define FAST				ios_base::sync_with_stdio(0);cin.tie(NULL), cout.tie(NULL);
#define all(v)              ((v).begin()), ((v).end())
#define allr(v)             ((v).rbegin()), ((v).rend())
#define MP                  make_pair
#define PI                  3.14159265359
#define ull                 unsigned long long
#define ll                  long long
#define LD					long double
#define vi                  vector<int>
#define vl                  vector<ll>
#define vs                  vector<string>
#define vp                  vector<pair<int,int>>
#define OO                  (int)2e9	
using namespace std;
const ll MOD = (int)1e9 + 7;
void file()
{
	freopen("asd.txt", "r", stdin);
	freopen("asden.txt", "w", stdout);
}
int dx[] = { 1,-1,0,0,1,-1,1,-1 };
int dy[] = { 0,0,-1,1,1,-1,-1,1 };
const int MAX = (int)1e5 + 10;
int main()
{
	FAST;
	string s, ss = "";
	cin >> s;
	int n;
	cin >> n;
	vs t(n);
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		string a = t[i];
		reverse(all(a));
		if (s == a || t[i] == s)
		{
			cout << "YES\n";
			return 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (t[i][0] == s[1] && t[j][1] == s[0])
			{
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";
	return 0;
}