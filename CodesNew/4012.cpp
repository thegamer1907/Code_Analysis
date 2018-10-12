#include<iostream>
using namespace std;
#define ll long long 
int main()
{
     ll n,q,x,rem=0;
     cin>>n>>q;
     ll w[n+1];
     w[0]=0;
     for(ll i=1; i<n+1; i++)
     {
           cin>>w[i];
           w[i]+=w[i-1];
     }
     for(ll i=0; i<q; i++)
     {
           cin>>x;
           x+=rem;
           ll index=0;
           ll low=1, high=n, mid; 
           while(low<=high)
           {
                 mid=(low+high)/2;
                 if(w[mid]<=x)
                 {
                       index=mid;
                       low=mid+1;
                 }
                 else
                 high=mid-1;
           }
           if(index==n)
           {
           rem=0;
           cout<<index<<endl;;
           }
           else
           {
           rem=x;
           cout<<n-index<<endl;
           }
      }
     
}
