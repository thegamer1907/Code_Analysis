#include <iostream>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int arr[n];
   int max=0;
   int sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
       if(max<arr[i])
       max=arr[i];
   }
  // cout<<max*n<<endl;
    sum=max*n-sum;
    //cout<<sum<<endl;
   if(sum>=m)
   cout<<max<<" "<<max+m<<endl;
   else
   {int x=0;
   //cout<<m<<endl;
       x=m-sum;
     //  cout<<x<<endl;
       if(x%n==0)
       x=x/n;
       else
       x=(x/n)+1;
       cout<<max+x<<" "<<max+m<<endl;
       //cout<<max<<" "<<m<<endl;
   }
   return 0;
}