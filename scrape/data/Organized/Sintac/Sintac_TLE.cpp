#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long


int main()
{
	ll n, m, k;
	cin >> n >> m >> k;
	ll p[100005];
	queue<ll> q;
	for (int i = 0; i < m; i++)
	{
		cin >> p[i];
		q.push(p[i]);
	}
	ll cnt = 0;
	ll page;
	if (n%k == 0)page = n / k;
	else page = n / k + 1;
	ll flag = 0, temp = 0;
	for (ll i = 1; i <= page; )
	{
		if (q.front() <= i * k + flag)
		{

			while (q.front() <= i * k + flag)
			{
				temp++;
				q.pop();
				if (q.empty())break;
			}
			flag = temp;
			cnt++;
		}
		if (q.empty())break;
		else if (q.front() <= i * k + flag)continue;
		else i++;

	}
	cout << cnt;

	return 0;
}