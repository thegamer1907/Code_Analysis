#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i = a; i <= b; ++i)
#define rFOR(i,a,b) for(int i = a; i >= b; --i)
typedef long long ll;
using namespace std;
ll n,m,sum,a[111111],b[111111];
bool used[111111];
main()
{
	ios_base::sync_with_stdio(false);
	cin >> n;
	FOR(i,1,n)
	{
	    cin >> a[i];
	}
	sort(a+1,a+1+n);
	cin >> m;
	FOR(i,1,m)
	{
	    cin >> b[i];
	}
	sort(b+1,b+1+m);
	FOR(i,1,n)
	{
	    FOR(j,1,m)
	    {
	        if(abs(a[i]-b[j]) <= 1)
            {
                b[j] = 111111;
                sum++;
                break;
            }
	    }
	}
	cout << sum;
}
