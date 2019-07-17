#include <iostream>
#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;

long long  it[100005];
int m;
long long  k;
long long  n, res = 0;
int main()
{
    cin >> n >> m >> k;
	for (int i = 1; i <= m; i++)
		cin >> it[i];
	int j = 1, r = 1;
	long long  cur;
	while (j != m+1)
	{
		cur = (it[j] - r) / k + 1;
		while (it[j] - r + 1 <= k * cur && j <= m)
			j++;
		r = j;
		res++;
	}
	cout << res;
}