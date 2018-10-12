#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   int n,q;
   cin>>n>>q;
   ll st[n],ar[q];
   for(int i=0;i<n;i++)
   cin>>st[i];
   for(int i=0;i<q;i++)
   cin>>ar[i];
   ll tst[n],tar[q];
   tst[0]=st[0];
   tar[0]=ar[0];
   for(int i=1;i<n;i++)
   {
       tst[i]=st[i]+tst[i-1];
       
   }
   for(int i=1;i<q;i++)
   {
       tar[i]=ar[i]+tar[i-1];
   }
   /*for(int i=0;i<q;i++)
   {
       cout<<tst[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<tar[i]<<" ";
   }
   cout<<endl;*/
   ll adjuster=0;
   for(int i=0;i<q;i++)
   {
       int low=0,high=n-1;
       while(low<=high)
       {
           int mid=low+(high-low)/2;
           if(tst[mid]<=tar[i]-adjuster)
           low=mid+1;
           else
           high=mid-1;
       }
       //cout<<high<<endl;
       if(high==n-1)
       {cout<<n<<endl;
       adjuster=tar[i];}
       else
       cout<<n-1-high<<endl;
   }
   
}