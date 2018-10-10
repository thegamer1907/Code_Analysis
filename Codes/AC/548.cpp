#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const ll SIZE = (ll)1e5;
const ll INF = (ll)1e9 + 7;
const ld EPS = (ld)1e-9;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    int k;
    cin >> k;

    for (int i = 0, i1, sum; ; i++)
    {
        sum = 0;
		i1 = i;
		while (i1)
		{
			sum += i1 % 10;
			i1 /= 10;
		}
		if (sum == 10)
			k--;
		if (!k)
		{
			cout << i;
			return 0;
		}
    }

    return 0;
}
