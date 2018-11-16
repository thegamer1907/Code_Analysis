#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long int
#define mp make_pair

int main()
{
    fast
   int n,sum=0;
   cin>>n;
   int a[n];
 //  memset(dp,1,sizeof(dp));
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)
        sum++;
   }
   if(sum==n)
    {cout<<sum-1<<endl;
   return 0;}
   if(sum==0)
   {
       cout<<n<<endl;
       return 0;
   }
   int ans=0,c=0;
   for(int i=0;i<n;i++)
   {
     if(a[i]==1)
     {
         if(c>0)
            c--;
     }else
     {
         c++;
         ans=max(ans,c);
     }

   }
   cout<<ans+sum<<endl;
     return 0;
}
