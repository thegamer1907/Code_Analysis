#include <iostream>

using namespace std;
int n,k;
int a[51];
int main()
{
    cin>>n>>k;
    int x,ans = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        if(a[i]>=a[k-1]&&a[i]>0)ans++;
    cout<<ans<<endl;
    return 0;
}
