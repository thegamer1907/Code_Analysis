#include<bits/stdc++.h>
#define ll long long
#define f1 for(ll i=0;i<n;i++)
using namespace std;
ll b[1000005];
int main()
{
    ll n;
    cin>>n;
   ll a[n+5];
   f1
   {
       cin>>a[i];
       b[a[i]]++;
   }
   sort(a,a+n);

   //f1{cout<<a[i]<<" ";}
  // cout<<endl;
   ll c=n;
   ll k=n/2;
   for(ll i=0;i<n/2;i++)
   {

       while(1)
       {

           if(2*a[i]<=a[k]){
                c--;
                k++;

            break;
           }
           else k++;

           if(n==k)break;

       }


       if(n==k)
       {
           break;
       }
   }//cout<<endl;

   cout<<c;

}
