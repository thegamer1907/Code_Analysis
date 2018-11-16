#include<iostream>
using namespace std;
int arr[10000000];
int main()
{
	int n,t;
	scanf("%d %d",&n,&t);
	for(int i=1;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x=1;
	while(x<t)
	{
		x=x+arr[x];
	}
	puts(t==x?"YES":"NO");
	return 0;
}
 /*int a[1234567];

int main() {
  int n, t;
  scanf("%d %d", &n, &t);
  for (int i = 1; i < n; i++) {
    scanf("%d", &a[i]);
    printf("\n%d\n", a[i]);
  }
  int x = 1;
  while (x < t) {
    x += a[x];
  }
  puts(x == t ? "YES" : "NO");
  return 0;
}*/