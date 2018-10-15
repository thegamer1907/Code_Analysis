#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int n, a[500010];
int main()
{
    int i, n;
	while( cin >> n )
	{
		for(int i=0;i<n;i++)
			cin >> a[i];
		sort( a, a+n );
		int ans = n-1;
		for(i=n/2-1;i>=0;i--)
		{
			if( a[i]*2 <= a[ans] )
                ans--;
		}
		cout << ans+1 << endl;
	}
	return 0;
}
