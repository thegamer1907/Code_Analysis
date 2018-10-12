#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
#include <queue>
#define eps 1e-8
const double PI = acos(-1.0);
const int maxn = 1e5;
const int INF = 1e9;
using namespace std;

int main()
{
    int n,q;
    while(scanf("%d%d",&n,&q) != EOF)
    {
        long long a[n];
        long long sum[n];
        //memset(sum, 0, sizeof sum);
        for(int i = 0; i<n; i++)
        {
            scanf("%I64d",&a[i]);
            if(i == 0)
                sum[i] = a[i];
            else
                sum[i] = sum[i-1]+a[i];
        }
        long long remain = 0,atk = 0;
        int pos = 0;
        int ans[q];
        for(int i = 0; i<q; i++)
        {
            long long k;
            scanf("%I64d",&k);
            atk += remain + k;
            if(atk>=sum[n-1])
            {
                atk = 0;
                remain = 0;
                pos = 0;
            }
            else
            {
                pos = upper_bound(sum+pos,sum+n,atk)-sum;
                //remain = sum[pos]-atk;
//                if(sum[pos] == atk)
//                    pos++;
//                else if(pos!=0)
//                    pos--;

            }
            //cout<<atk<< " "<< remain<<endl;
            //cout<<"pos = "<<pos<<endl;

            ans[i] = n-pos;
        }
        for(int i = 0; i<q; i++)
            cout<<ans[i]<<endl;
    }
    return 0;
}
