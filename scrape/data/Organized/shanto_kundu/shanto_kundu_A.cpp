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
    while(m>0)
    {
        if(q.front()-d<=k)
            page=1;
        else
        {
            long long t1=q.front()-d;
            long long t2=k;
            if(t1%t2==0)
                page=t1/t2;
            else
                page=t1/t2+1;
        }
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