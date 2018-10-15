#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0,mx=-1,mn=-1;
    cin>>n>>m;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        mx=max(mx,a);
    }
    cout<<max(mx,(sum+m-1)/n+1)<<" "<<mx+m<<endl;
    return 0;
}