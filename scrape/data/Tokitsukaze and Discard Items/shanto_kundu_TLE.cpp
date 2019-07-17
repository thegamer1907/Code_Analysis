#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    queue <long long> q;
    long long a;
    for(int i=0;i<m;i++)
        cin>>a,q.push(a);
    long long page=0;
    long long sum=0,d=0;
    n=ceil(n/k);
    while(m>0)
    {
        long long low=1,high=n;
        while(low<=high)
        {
            long long  mid=low+(high-low)/2;
            if((mid*k)>=(q.front()-d))
                page=mid,high=mid-1;
            else
                low=mid+1;
        }

       /* if(q.front()-d<=k)
            page=1;
        else
        {
            long long t1=q.front()-d;
            long long t2=k;
            page=ceil(t1/t2);
        } */
        int cnt=0;
        sum++;
        while(q.size()&&page*k>=q.front()-d)
            q.pop(),cnt++;
        d+=cnt;
        m-=cnt;
    }
    cout<<sum<<endl;
    return 0;
}