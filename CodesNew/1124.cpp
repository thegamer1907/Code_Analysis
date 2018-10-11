#include <bits/stdc++.h>
using namespace std;

#define pr(x) cout<<x<<'\n',0
#define sc(x) scanf("%lld",&x);
#define scarr(x,a) for(int _=0;_<x;_++)scanf("%d",&a[_]);
#define rep(_,x) for(int _=0;_<x;_++)
#define rep1(_,x) for(int _=1;_<=x;_++)

long long N;

bool Can(long long T ,long long K)
{
    long long V = 0LL ,R = 0LL;

    while(T)
    {
        V += min(K ,T);
        T -= min(K ,T);
        R += T/10;
        T -= T/10;
    }

    return (R <= V);
}

int main()
{
    sc(N) //N = 1e18;

    long long st = 1 ,en = N ,mid;

    while(st <= en)
    {
        mid = (st+en)>>1;

        if(Can(N ,mid))
            en = mid-1;
        else
            st = mid+1;
    }

    pr(en+1);
}
