#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pb push_back
#define Pi 3.14159265
#define Vi vector<int>;

using namespace std;

int main()
{
	int n, t, kk;
	cin >> n >> t;
	int a[n + 10];
	for(int i = 1; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 1; i < n;)
	{
		if(i==t)
		{
			cout << "YES";
			return 0;
		}
		if(i>t)
		{
			cout << "NO";
			return 0;
		}
		i+=a[i];
		kk=i;
	}
	if(kk==t)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}