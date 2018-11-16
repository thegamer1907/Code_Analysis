#include <bits/stdc++.h>
using namespace std;
const int N = 5e4+5, OO = 0x3f3f3f3f;
int main()
{
    int n,m,sum=1;
    cin>>n>>m;
    int arr[n];
    for(int i=1; i<n; i++)
        cin>>arr[i];
    while(sum<m)
    sum+=arr[sum];
    if(sum==m)return cout<<"YES"<<endl,0;
    return cout<<"NO"<<endl,0;
    return 0;
 }
