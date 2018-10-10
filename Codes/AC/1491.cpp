#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
const int maxn = 1e5 + 10;
ll a[maxn] , b[maxn], i , j , n , s , sum;
ll GH(ll m)
{
    /*for(j = 0 ; j < i ;j++)
    {
        b[j] = a[j] + ((j+1) * m);
        cout << b[j] << ' ';
    }
    cout << endl;
    sort(b , b + i);
    return;*/
    for(j = 0; j < i ; j++)b[j] = a[j] + j * m + m;
	sort (b , b + j);
	sum = 0;
	for(j = 0;j < m ; j++) sum += b[j];
	return sum;
}
int main()
{
    scanf("%lld%lld",&n,&s);
    for(i = 0 ; i < n ; i++)
        scanf("%lld",a+i);
    ll l = 0 , r = n , mid = (l + r) / 2 ;
    while(r > l)
    {
        mid = (l + r + 1 ) / 2;
        if(GH(mid) <= s)
            l = mid;
        else
            r = mid - 1;
    }
    cout << l << ' ' << GH(l);
	/*for(r = 0 ; r <= i ; r++)if(GH(r) > s)break;
	printf("%lld %lld",r-1,GH(r - 1));*/
    return 0;
}
