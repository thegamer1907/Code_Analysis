#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	int c = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]) {
                c++;
                a[i] *= -1;
		}else{
		    a[i] = 1;
		}
	}
	int s = 0,m = INT_MIN;
	for(int i = 0; i < n; i++)  // kadane algo
	{
		s = max(s + a[i], a[i]);
		m = max(m, s);
	}
	printf("%d\n", m +c);
	return 0;
}
