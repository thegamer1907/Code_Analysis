#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <iomanip>

using namespace std;
int a[100005];
int sum[100005];
int main()
{
    //freopen ("input.txt","r",stdin);
    int n,t;
    cin >> n >> t;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for (int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    int MAX;
    MAX=0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]<=t)
        {
            MAX=1;
            break;
        }

    }
    int res;
    if (n>1)
    {
        for (int i=1;i<=n-1;i++)
        {
            int sum1=0;
            int sum2=0;
            sum1=sum[i-1];
            int L=i+1;
            int R=n;
            int M;
            res=0;
            while (L<=R)
            {
                sum2=0;
                M=(L+R)/2;
                sum2=sum[M];
                if (sum2-sum1<=t)
                {
                    res=M;
                    L=M+1;
                }
                else R=M-1;
            }

            int kc=res-i+1;
            if (kc>MAX)
            {
                MAX=kc;
            }
        }
    }
    else
    {
        if (t>=a[1])
        {
            cout << 1;
            return 0;
        }
        if (t<a[1])
        {
            cout << 0;
            return 0;
        }
    }


    cout << MAX;
    return 0;
}
