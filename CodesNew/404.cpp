#include <cstdio>
int main()
{
	int n, t;
	scanf("%d%d", &n, &t);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int fs[n];
	for (int i = 0, temp = 0; i < n; i++)
	{
		fs[i] = temp;
		temp += a[i];
	}
	
	int max = 0, ans;
	int left, right, mid;
	for (int i = 0; i < n; i++)
	{
		left = i, right = n-1;
		while (left < right-1)
		{
			mid = (left+right)/2;
			if (fs[mid]-fs[i]+a[mid] > t)
				right = mid;
			else
				left = mid;
		}
		if (fs[right]-fs[i]+a[right] <= t)
			ans = right-i+1;
		else if (fs[left]-fs[i]+a[left] <= t)
			ans = left-i+1;
		else
			ans = left-i;
		if (ans > max)
			max = ans;
	}
	printf("%d", max);
	return 0;
}
