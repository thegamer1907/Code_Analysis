#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x, id;
} a[100005];
bool cmp(node a, node b) { return a.x < b.x; }
int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i <= n; i++)
			cin >> a[i].x,a[i].id=i;
		sort(a+1, a + n+1,cmp);
		int ans = 1e9 + 7,k;
		for (int i = 1; i <= n; i++)
		{
			int z = (a[i].x) %n+1;
			if (z == a[i].id) { if (ans > a[i].x)ans = a[i].x, k = a[i].id; }
			else if (z< a[i].id)
			{
				if (ans >a[i].x+a[i].id-z)ans = a[i].x + a[i].id - z, k = a[i].id ;
			}
			else 
				if (ans >a[i].x+n+a[i].id-z)
			    {
			 	 ans =a[i].x+n + a[i].id - z;
				 k = a[i].id ;
			     }
		}
		cout << k << endl;
	}
	return 0;
}