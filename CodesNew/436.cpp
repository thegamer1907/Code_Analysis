#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,i,j,k,l,n,m,x,y,t;
    scanf("%lld%lld",&n,&t);
    vector<long long int>vec(n),ans(n);
    vector<long long int>::iterator it;
    scanf("%lld",&vec[0]);
    ans[0]=vec[0];
    for(i=1;i<n;i++)
    {
        scanf("%lld",&vec[i]);
        ans[i]=ans[i-1]+vec[i];
    }
    a=0;
    for(i=0;i<n;i++)
    {
        if(vec[i]<=t)
        {
            b=ans[i]+(t-vec[i]);
            it=upper_bound(ans.begin(),ans.end(),b);
            c=it-ans.begin();
            a=max(a,c-i);
        }
    }
    printf("%lld\n",a);
    return 0;
}
