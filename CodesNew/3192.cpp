#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair

const int maxn = 3e5 + 100 , maxc = 115, mod = 1e9 + 7, inf = 1e9+10;

int n, k, arr[maxn], sefr[maxn];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sefr[i + 1] = sefr[i] + (!arr[i]);
	}
	
	int L = 0, res = 0, r = 1;
	for (int l = 1; l <= n; l++)
	{
		while (sefr[r] - sefr[l-1] <= k && r <= n)
			r++;
		r--;
		if (res < r - l + 1)
		{
			res = r - l + 1;
			L = l - 1;
		}
	}
	cout << res << endl;
	int i;
	for (i = 0; i < L; i++) 
		cout << arr[i] << ' ';
	for ( ; i - L < res; i++)
		cout << 1 << ' ';
	for ( ; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
	return 0;
}
