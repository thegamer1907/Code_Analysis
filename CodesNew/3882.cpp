#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int mr=arr[n-1],ns=0;//mr:min round,ns;number supervisors
    for(int i=0;i<n&&ns<mr;i++)
        ns+=(mr-arr[i]);
    while(ns<mr){
        mr++;
        ns+=n;
    }
    cout<<mr;
    return 0;
}
