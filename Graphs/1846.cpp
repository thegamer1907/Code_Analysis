#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,m,x,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>x,mp[x]++;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]-1]>0)
            ans++,mp[arr[i]-1]--;
        else if(mp[arr[i]]>0)
            ans++,mp[arr[i]]--;
        else if(mp[arr[i]+1]>0)
            ans++,mp[arr[i]+1]--;
    }
    cout<<ans<<endl;
    return 0;
}
