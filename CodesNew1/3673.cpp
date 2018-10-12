#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,high=-111,sum=0;
    float result;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        high=max(arr[i],high);
    }
    result =ceil((float)(sum+m)/n);
    if(result<high)
    {
        cout<<high<<" ";
    }
    else cout<<result<<" ";

    cout<<high+m<<endl;
}
