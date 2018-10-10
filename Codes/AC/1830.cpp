/// #bettercoderthanshebeautiful
/// Now on codeforces too
/// Why contests on 29th, 31st and 2nd
/// What's wrong with 1st Feb
#include<bits/stdc++.h>
using namespace std;
long long n,m,k;
long long hmg(long long prd)
{
    long long sol=0;
    for(long long i=1;i<=n;++i)
        sol+=min(m,(prd/i));
    return sol;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m>>k;
    long long b=1;
    long long e=n*m;
    while(b<=e)
    {
        long long mid=(b+e)/2;
        long long xx=hmg(mid);
        long long yy=hmg(mid-1);
        if(xx>=k && yy<k){
            cout<<mid;
            return 0;
        }
        if(xx<k)
            b=mid+1;
        else
            e=mid-1;
    }
    return 0;
}
