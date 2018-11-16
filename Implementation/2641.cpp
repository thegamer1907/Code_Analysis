#include<bits/stdc++.h>
using namespace std;

int a,b,c;
int ans;

int main()
{
    cin>>a>>b>>c;
    ans=max(ans,a+b+c);
    ans=max(ans,a+b*c);
    ans=max(ans,a*b+c);
    ans=max(ans,a*b*c);
    ans=max(ans,(a+b)*c);
    ans=max(ans,a*(b+c));
    cout<<ans<<endl;
}