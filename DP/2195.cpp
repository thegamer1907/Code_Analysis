#include <bits/stdc++.h>

using namespace std;
map<int,int>vi;
int main()
{
   int n,m;
   cin>>n>>m;
   int ar[n],arr[n];
   for(int i=0;i<n;i++)
    cin>>ar[i],arr[i]=ar[i],vi[ar[i]]++;
   int x;
   sort(arr,arr+n);
   int cnt=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=arr[i+1])
       {
           cnt++;
       }
   }
   int ans[n];
   for(int i=0;i<n;i++)
   {
       ans[i]=cnt;
       vi[ar[i]]--;
       if(vi[ar[i]]==0)
        cnt--;
   }


    for(int i=0;i<m;i++)
    {
        cin>>x;

        cout<<ans[x-1]<<endl;
    }

    return 0;
}
