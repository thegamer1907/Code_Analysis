#include<bits/stdc++.h>
using namespace std;
bool dfs(int start,int *arr,int n,int t)
{  if(start!=t && arr[start]==0)
    return false;
    if(start==t)
    return true;
    return dfs(start+arr[start],arr,n,t);
}
int main()
{int n,t,i;
cin>>n>>t;
int arr[n+1]={};
for(i=1;i<n;i++)
   {cin>>arr[i];
   }
if(dfs(1,arr,n,t))
   cout<<"YES\n";
else
   cout<<"NO\n";
}
