#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000
typedef long long ll;
typedef unsigned long long ull;

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int c=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);	
		if(a[i]) c++;
		if(a[i] == 1) a[i] *= -1;
		else a[i] = 1;
	}
	int s=0,m=-n;
	for(int i=0;i<n;i++)
	{
		s = max(s+a[i], a[i]);
		m = max(m,s);
	}
	printf("%d\n", m +c);
	return 0;
}