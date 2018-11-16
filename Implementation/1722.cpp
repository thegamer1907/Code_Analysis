#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
#include<cmath>
#include<functional>
#include<vector>
#include<string>
#define MAX 10000000
using namespace std;
#define ll long long
#define forlln for(long long i = 0; i < n; i++)
#define forllv for(long long i = 0; i < v.size(); i++)
#define forlls for(ll i = 0; i< s.length(); i++)
ll n;
vector<ll>v;
int main()
{
	string s;
	cin >> s;
	ll count0 = 0, count1 = 0;
	forlls
	{
		if(s[i] == '1')
		{
			count1++;
			count0 = 0;
		}
		else
		{
			count1 = 0;
			count0++;
		}
		if(count0 == 7 || count1 == 7)
		{
			cout << "YES" << endl;
			exit(0);
		}
	}
	cout << "NO" << endl;

	return 0;
}
