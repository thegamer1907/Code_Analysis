#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=1;
    cin>>n>>m;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    while(k<m)
    {
        k=k+arr[k-1];
    }
    if(k==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
