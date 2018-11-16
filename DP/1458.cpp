#include <bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
	int n;
	cin >> n;
	int i, j, k;
	
	for (i=1; i<=n; i++)  cin >> a[i];
	
	int ans=0;
	for (i=1; i<=n; i++)
		for (j=i; j<=n; j++){
			for (k=i; k<=j; k++)
				a[k] = 1 - a[k];
			
			int t=0;
			for (k=1; k<=n; k++)
				if (a[k] == 1)
					t++;
					
			if (t > ans)
				ans = t;
				
			for (k=i; k<=j; k++)
				a[k] = 1 - a[k];
		}
		
	cout << ans << endl;
	return 0;
}