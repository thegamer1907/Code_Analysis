#include <bits/stdc++.h>

using namespace std;
int n,arr[123456];
int bs(int x)
{
    int s=1,e=n,mid;
    while(s<e)
    {
        mid=(s+e)/2;

        if(x<=arr[mid]) e=mid;
        else s=mid+1;
    }
    return s;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=1;i<=n;i++) arr[i]+=arr[i-1];

    int m,x;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        cout<<bs(x)<<endl;
    }
    return 0;
}
