#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int a[100005];
int main()
{
	int n, S;
	cin >> n >> S;
	for (int i = 1;i <= n;i++)
		scanf("%d", &a[i]);
	int k = 1;
	int things[100005];
	int ans=-1;
	ll cost;
	while (k<=n)
	{
		for (int i = 1;i <= n;i++)
			things[i] = a[i] + k*i;
		sort(things + 1, things + 1 + n);
		ll thesum = 0;
		for (int i = 1;i <= k;i++)
			thesum += things[i];
		if (thesum > S)break;
		else ans = k, cost = thesum;
		k++;
	}
	if (ans == -1)
		cout << 0 << " " << 0 << endl;
	else
		cout << ans << " " << cost << endl;
}