#include<bits/stdc++.h>
#define ll long long
#define pa pair<int,int>
#define mkp make_pair
using namespace std;
int k;
inline int calc(int x)
{
    int sum=0;
    while (x)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
inline void work()
{
    scanf("%d",&k);
    int now=18;
    while (k)
    {
        now++;
        if (calc(now)==10)k--;
    }
    printf("%d\n",now);
}
int main()
{
    int T=1;//scanf("%d",&T);
    while (T--)work();
}
