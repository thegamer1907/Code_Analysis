#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0,n,an;
    cin>>n;
    an=n;
    while(an--)
    {
        cin>>a>>b>>c;
        sum+=c;
    }
    if(n==1&&c==0&&a!=0&&b!=0)
        printf("NO\n");
    else if(sum==0)
        printf("YES\n");
    else
       printf("NO\n");
}
