#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,m;
   cin>>n>>m;
     int t1=m;
     int mini=100000007,maxi=0;
       int arr[n],i,defi;
     for(i=0;i<n;i++)
     {    cin>>arr[i];
          maxi=max(arr[i],maxi);
     }
     int em=maxi;
   int def=0;
   for(i=0;i<n;i++)
          def+=(maxi-arr[i]);
  //    cout<<em<<endl<<"mis";
   if(def<m)
    {    m-=def;
       maxi+=ceil(m/(float)n);
    }
   cout<<maxi<<" "<<em+t1<<endl;
}
