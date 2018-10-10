#include <iostream>

using namespace std;
long long n,m;
long long solve(long long num)
{
    int i;
    long long cnt=0;
    for(i=1;i<=n;i++)
    {
        cnt+=max(0ll, m-( (num+i-1)/i )+1 );
    }
    return cnt;
}
int main()
{
    long long k;
    cin>>n>>m>>k;
    long long l = 1,r=1e12;
    k=n*m-k;
//    for(long long i=1;i<=n*m;i++)
//        cout<<i<<":"<< (solve(i)>k )<<","<<solve(i)<<"\n";
        while(l<r)
        {
            long long m = (l+r)/2;
            long long cnt = solve(m);
            if(cnt>k)
                l=m+1;
            else
                r =m;
        }
        cout<<l-1<<"\n";
    return 0;
}
