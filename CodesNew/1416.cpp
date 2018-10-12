#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int a[3],b[3],c[3]={};
    for (int i=0;i<s.size();i++)
    {
        if (s[i]=='B')
            c[0]++;
        else if (s[i]=='S')
            c[1]++;
        else
            c[2]++;
    }
    for (int i=0;i<3;i++)
        scanf("%d",&a[i]);
    for (int i=0;i<3;i++)
        scanf("%d",&b[i]);
    long long x;
    scanf("%lld",&x);
    long long l=0,h=1e15,mid,sum,ans=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        sum=(max((c[0]*mid)-a[0],(long long)0)*b[0])+(max((c[1]*mid)-a[1],(long long)0)*b[1])+(max((c[2]*mid)-a[2],(long long)0)*b[2]);
        if (sum<=x)
        {
            l=mid+1;
            ans=mid;
        }
        else
            h=mid-1;
    }
    printf("%lld\n",ans);
    return 0;
}
