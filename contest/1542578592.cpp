#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
int aa[12];
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	int a = h % 12;
	int b = m / 5;
	int c = s / 5;
	if (a > b)
		swap(a,b);
	if (c < b)
	{
		swap(b,c);
		if (a > b)
			swap(a,b);
	}
	if (a != b)
	{
		for (int i = a + 1; i <= b; i++)
			aa[i] = 1;
	}
	if (b != c)
	{
		for (int i = b + 1; i <= c; i++)
			aa[i] = 2;
	}
	if (aa[t1 % 12] == aa[t2 % 12] )
		puts("YES");
	else
		puts("NO");
    return 0;

}