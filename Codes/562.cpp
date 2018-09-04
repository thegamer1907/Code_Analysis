#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define gtc getchar
#define ptc putchar
#define pii pair<int, int>
#define waitw while(1)
#define wait cout << '\n', system("pause")
#define streams ios_base::sync_with_stdio(0)
using namespace std;
/*---------------*/
int k, cnt = 0;
int main()
{
	cin >> k;
	for (int i = 1;; ++i)
	{
		int a = i, sum = 0;
		while (a)
			sum += a % 10, a /= 10;
		if (sum == 10)
			++cnt;
		if (cnt == k)
			return cout << i, 0;
	}
}