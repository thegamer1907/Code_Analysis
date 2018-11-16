#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	--a, --b;
	int ans = 0;
	while (a != b)
		a >>= 1, b >>= 1, ++ans;
	if (n == 1 << ans)
		cout << "Final!";
	else
		cout << ans;
}
