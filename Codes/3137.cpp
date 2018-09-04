#include <iostream>
#include <cstdio>
using namespace std;
#pragma warning(disable:4996)
int en[100001];

int main()
{
	int n, ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &en[i]), en[i] -= i;
	}
	for (;;) {
		for (int i = 0; i < n; i++)
		{
			if (en[i]<=0)return cout << i + 1 << endl , 0;
			else en[i] -= n;
		}
	}
	//system("pause");
	return 0;
}