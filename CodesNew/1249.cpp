#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple

using namespace std;

typedef pair<int, int> ii;
typedef long long ll;

int main()
{
	int n;
	scanf("%d", &n);
	int ans = 0x3f3f3f3f, ent = -1;
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		int r = a % n;
		int t = a + (n + i - r)%n;
		if (ent == -1 or t < ans)
		{
			ent = i+1;
			ans = t;
		}
	}
	printf("%d\n", ent);
	return 0;
}

