#include<bits/stdc++.h>
using namespace std;
int n,s[500005],i,j,ans;
int main()
{
    cin>>n;
    j=n/2;
    for(int k=0;k<n;k++)
        cin>>s[k];
    sort(s,s+n);
    while(i<n/2&&j<n)
    {
        if(s[i]*2<=s[j])
        {
            ++ans;
            ++i;
        }
        ++j;
    }
    cout<<n-ans<<endl;
    return 0;
}
