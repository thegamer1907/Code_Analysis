#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<vector>
#include<string>
#include<queue> 
#include<algorithm>
#include<cmath>
const int M=1000005;
typedef long long int LL;
typedef unsigned long long ULL;
using namespace std;
int a[M];
bool judge(int x)
{
	int sum=0;
	while (x)
	{
		sum += x % 10;
		x /= 10;
	}
	if (sum==10)
		return 1;
	else
		return 0;
}
int main()
{
	int i, n, m,count=1;
	for (i = 19; i < 12000000; i++)
	{
		if (judge(i))
			a[count++] = i;
	}
	cin >> n;
	cout << a[n] << endl;
}