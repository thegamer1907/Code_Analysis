#include<cstdio>
#include<iostream>
const int N = 104;
using namespace std;
int n, m, a[N];

bool chk(int x)
{
	int cnt = m;
	for(int i = 1; i <= n; ++ i)
		if(a[i] < x) cnt -= x - a[i]; 
	return cnt <= 0;
}

int main()
{
	int maxa = 0;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; ++ i) 
	{
		scanf("%d", &a[i]);
		maxa = max(maxa, a[i]);
	}
	int l = maxa, r = maxa+m;
	int mid = (l + r) >> 1;
	while(l < r)
	{
		if(chk(mid)) r = mid;
		else l = mid + 1;
		mid = (l + r) >> 1;
	}
	printf("%d %d\n", mid, maxa+m);
	return 0;
}