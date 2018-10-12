#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
lli binarySearch(lli arr[], lli l, lli r, lli x,lli n)
{
   if (r >= l)
   {
        lli mid = l + (r - l)/2;
        if (arr[mid] == x)  
            return mid;
        if (arr[mid] > x){
            if(mid!=0 && arr[mid-1]<=x){
                return mid-1;
            }
            return binarySearch(arr, l, mid-1, x,n);}
        if(arr[mid]<x){
            if(mid!=(n-1) && arr[mid+1]>x){
                return mid;
            }
        return binarySearch(arr, mid+1, r, x,n);}
   }
   
}
int main(){
   lli n,q;
   cin>>n>>q;
   lli a[n];
   lli b[n];
   lli k[q];
   for(lli i=0;i<n;i++){
       cin>>a[i];
   }
   lli r = 1;
   b[0]=a[0];
   for(lli i=1;i<n;i++){
       b[i]=a[i]+b[i-1];
   }
   lli max = b[n-1];
   for(lli i=0;i<q;i++){
       cin>>k[i];
   }
   lli t = 0;
   for(lli i=0;i<q;i++){
       if(r == 1){
         if(k[i]>=max){
           cout<<n<<endl;
           r = 1;
           t = 0;
         }
         else{
          cout<<n-binarySearch(b,0,n-1,k[i],n)-1<<endl;
          t = t + k[i];
           r = 0;
         }  
       }
       else{
          if(t+k[i]>=max){
           cout<<n<<endl;
           r = 1;
           t = 0;
          }
          else{
           cout<<n-binarySearch(b,0,n-1,t+k[i],n)-1<<endl;
           r = 0;
           t = t + k[i];
          } 
       }
      
   }
   
    return 0;
}