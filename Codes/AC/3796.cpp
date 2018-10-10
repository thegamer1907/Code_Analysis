#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string word;
	cin >> word;
	ll b = 0, s = 0, c = 0;
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == 'B')
			b++;
		else if (word[i] == 'S')
			s++;
		else
			c++;
	}
	vector<ll> vec(6), temp(3);
	for (int i = 0; i < 6; i++)
		cin >> vec[i];
	ll r;
	cin >> r;
	ll st = 0, e = 1e15, mid;
	while (st <= e)
	{
		mid = (st + e) >> 1;
		temp[0] = max(0ll, (mid * b) - vec[0]) * vec[3];
		temp[1] = max(0ll, (mid * s) - vec[1]) * vec[4];
		temp[2] = max(0ll, (mid * c) - vec[2]) * vec[5];
		ll sum = temp[0] + temp[1] + temp[2];
		if (sum > r)
			e = mid - 1;
		else
			st = mid + 1;
	}
	cout << st - 1 << endl;
	return 0;
}
