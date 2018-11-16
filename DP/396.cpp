#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m;
   cin>>n;
   int arr[n];
   for(int i =0 ; i<n ; i++)
   {
       scanf("%d",&arr[i]);
   }
   cin>>m;
   int arr1[m];
   for(int i =0 ; i<m ; i++)
   {
       scanf("%d",&arr1[i]);
   }
   sort(arr,arr+n);
   sort(arr1,arr1+m);
 
   int x=min(n,m),c=0;
   for(int i =0 ; i<n ;i++){
   for(int j=0 ;j<m ; j++)
   {
       if(arr1[j]>0){
      if( arr[i]==arr1[j]||abs(arr[i]-arr1[j])==1)
      {
          c++;
          arr1[j]=-1;
          break;
      }

   }
   }
   
   }

   cout<<c;
    return 0;
}