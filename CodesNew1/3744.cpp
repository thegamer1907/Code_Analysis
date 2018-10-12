#include<bits/stdc++.h>
#define nhanh ios_base::sync_with_stdio(false); cin.tie(); cout.tie();
#define FOR(i, a, b) for(int i = (a); i <= (b); i ++)
using namespace std;
int n,m,a[105],sum;
int main()
{
	//freopen(".inp", "r", stdin);
	//freopen(".out", "w", stdout);
	cin >> n >> m;
    FOR(i,1,n) {cin >> a[i];sum += a[i];}
    sort(a + 1 , a +  1 + n);
    int Max = a[n] + m,Min = a[n];
    sum -= a[n];
    if(n == 1) Min = Max;
    else if((double)(sum + m)/(n - 1) > a[n])
    {
        int cur  = sum + m + a[n];
        if(cur % n !=0) Min = cur/n + 1;
        else Min = cur/n;
    }
    cout << Min <<" " << Max;


        return 0 ;
}

