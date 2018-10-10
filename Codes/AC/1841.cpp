#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 5e5+9;
long long vec[MAX_N];
long long N,M,T;
bool cheak(long long x)
{
    long long sum = 0;
    for(long long i=1;i<=N;i++)
    {
        //cout<<"!!!!!"<<x/i<<endl;
        sum += min(x/i,M);
    }
    if(sum < T)return true;
    else return false;
}
int main()
{

    while(cin>>N>>M>>T)
    {
        long long l=1,r=N*M;
        while(l<=r)
        {
            long long mid = (l+r)/2;
            //cout<<"....."<<mid<<endl;
            if(cheak(mid))
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        long long ans = l;
        cout<<ans<<endl;
    }
    return 0;
}

