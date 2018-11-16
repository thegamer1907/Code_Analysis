#include <iostream>
#include <cmath>
#include <utility>
using namespace std;
int main()
{
	int a, b, n;
	cin >> n >> a >> b;
	a--; b--;
	int cnt = 1;
	while (a/2 != b/2 && n != 2)
	{
		a /= 2; b /= 2;
		cnt++;
		n /= 2;
	}
	if (n == 2) cout << "Final!";
	else cout << cnt;
	//system("pause");
	return 0;

}