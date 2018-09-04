#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const ll SIZE = (ll)1e5;
const ll INF = (ll)1e18 + 7;
const ld EPS = (ld)1e-9;

int main()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	if (n == k)
	{
		cout << n;
		return 0;
	}

    int C[2], mx = 1;
	C[0] = C[1] = 0;
    for (int l = 0, r = 0; l <= n-mx; l++)
    {
		if (l)
			C[s[l-1]-'a']--;
        for (; r < n; r++)
        {
			if ((min(C[0], C[1]) < k) || (C[0] == C[1])
			|| (min_element(C, C+2) - C != s[r] - 'a'))
				C[s[r] - 'a']++;
            else
				break;
		}
		mx = max(mx, r - l);
    }

	cout << mx;

    return 0;
}
