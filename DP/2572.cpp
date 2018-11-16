#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long  arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=1;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
        
        res=max(res,cnt);
    }
    
    cout<<res;  
    return 0;
}
