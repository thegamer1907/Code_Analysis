#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <string>
#include <vector>
#include <set>

using namespace std;

#define FSIO  ios::sync_with_stdio(0);cin.tie(0);
#define DEBUG(a)   cout<<"DEBUG: "<<(a)<<endl;

const int MAXN = 100005;
const int MOD = 1e9+7;
const int INF = 1e9+7;

long long n, m, k;

long long cal(long long midn)
{
    long long cnt = 0;
    for(int i=1;i<=n;++i)
    {
        cnt += (i*m<=midn)?m:(midn/i);
    }
    return cnt;
}

long long solve()
{
    long long l = 1;
    long long r = n*m;
    long long mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(cal(mid)<k)  l = mid+1;
        else    r = mid-1;
    }
    return l;
}

int main()
{
    FSIO;

    while(cin>>n>>m>>k)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
