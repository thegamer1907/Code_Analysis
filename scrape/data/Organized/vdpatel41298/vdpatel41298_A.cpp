#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long p[m+5];
    for(int i=0;i<m;i++)
    {
        cin>>p[i];
    }
    long long l=1,r=k;
    long long count=0;
    long long c=0;
    int i=0;
    while(i<m)
    {
        if(p[i]>=l && p[i]<=r)
        {
            c++;
            i++;
        }
        else if(c>0)
        {
            r+=c;
            l+=c;
            c=0;
            count++;
        }
        else
        {
            long long x=ceil((double)(p[i]-r)/k);
            l+=k*x;
            r+=k*x;
        }
    }
    if(c>0)
    count++;
    cout<<count<<endl;
    return 0;
}