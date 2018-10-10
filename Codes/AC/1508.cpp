#include <bits/stdc++.h>

using namespace std;


long long a[100001];
vector<long long> b;

int main()
{
    int n;
    long long s;
    scanf("%d%I64d",&n,&s);
    for(int i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    long long l=0,r=n+1;
    long long sol1=0;
    long long sol2=0;
    while(l<r-1)
    {
        long long m=(l+r)/2;
        for(int i=0;i<n;i++)
        {
            b.push_back(a[i]+(i+1)*m);
        }
        sort(b.begin(),b.end());
        long long sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=b[i];
        }
        b.clear();
        if(sum<=s)
        {
            sol1=m;
            sol2=sum;
            l=m;
        }
        else
        {
            r=m;
        }
    }
    printf("%I64d %I64d",sol1,sol2);
    return 0;
}