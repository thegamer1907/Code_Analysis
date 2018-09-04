#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
__int64 n, m, k, sum, l, r,mid, ans;
__int64 check(__int64 mid)
{
    __int64 sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum +=min((mid-1)/i, m);
    }
    return sum;
}
int main()
{
    while(scanf("%I64d %I64d %I64d",&n, &m, &k)!=EOF)
    {
        r = n*m;
        l = 1;
        while(l <= r)
        {
            mid = (l + r) /2;
            if(check(mid) < k)
            {
                l = mid + 1;
                ans = mid;
            }
            else
                r = mid -1;
        }
        printf("%I64d\n",ans);
    }
    return 0;
}

		 		  	 	   	 	  		       		 	