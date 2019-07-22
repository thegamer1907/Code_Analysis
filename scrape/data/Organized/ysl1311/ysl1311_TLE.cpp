#include <bits/stdc++.h>
long long a[4][10];
using namespace std;
queue<long long>que;
int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    for(long long i=0;i<m;i++)
    {
        long long x;
        cin>>x;
        que.push(x);
    }
    long long t=k;
    long long ans=0,sum=0;
    while(que.size())
    {
        sum=0;
        while(que.front()<=t){
            que.pop();
            sum++;
            if (que.size()==0)
                break;
        }
        if (sum)
        {
            ans++;
            t+=sum;
        }
        else 
        {
            t+=k;
        }
    }
    cout<<ans<<endl;
    return 0;
}