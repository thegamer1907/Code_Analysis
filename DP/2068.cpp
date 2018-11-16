#include<bits/stdc++.h>
using namespace std;
int h[100001];
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arrm[m];
    int ans[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    if(h[arr[i]] == 0)
    count++;
    h[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if((i-1) >= 0)
        {
            if(h[arr[i-1]] == 1)
            count--;
            h[arr[i-1]]--;
        }
        ans[i]=count;
    }
    for(int i=0;i<m;i++)
    {
        cin>>arrm[i];
        cout<<ans[arrm[i]-1]<<endl;
    }
    return 0;
}