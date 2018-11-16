#include <iostream>
using namespace std;

int a[2001], vis[2001], ct = 0, ans = 0;
int max(int a, int b) { return a >= b? a : b; }


int main()
{
	int n; cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		int temp = i; ct = 0;
		if(vis[temp] == 1) continue;
		ct++; vis[temp] = 1;
		while(a[temp] != -1) ct++, temp = a[temp], vis[temp] = 1;
		ans = max(ans, ct);
	}
	cout << ans << endl;
	return 0;
}