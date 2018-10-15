#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);  
    //priority_queue < int > p;
    //p.push(a[n-1]);
    int ans=n;
    int ch[n];
    memset(ch,0,sizeof(ch));
    int val=n-1;
    for(i=n/2-1;i>=0;i--)
      {   //cout<<a[3]<<"\n";
         if(2*1ll*a[i]<=a[val])
           {   //cout<<i<<" ";
               --val;
               --ans;
           }
           
      }
     cout<<ans<<'\n'; 
    return 0;
}