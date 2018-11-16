#include<bits/stdc++.h>
using namespace std;
const int N=55;
int main()
{
    int n,k;
    int a[N];
    while(cin>>n>>k)
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>=a[k-1]&&a[i]>0) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
