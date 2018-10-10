#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100003];
int binser(int val, int n)
{
	int kir = 1, kan = n;
//	printf("%d %d\n", kir, kan);
	while(kan != kir)
	{
		int mid = (kir+kan)/2;
		if(a[mid] > val) kan = mid;
		else kir = mid+1;
	}

	if(a[kan] <= val) return kan;
	else return kan-1;
}
int main()
{
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i+1]);
	sort(a+1,a+n+1);
//	for(int i = 0; i < n; i++) printf("%d ", a[i+1]); printf("\n");
	int q; scanf("%d", &q);
	while(q--)
	{
		int val; scanf("%d", &val);
		printf("%d\n", binser(val,n));
	}
}
