#include<bits/stdc++.h>

using namespace std;
   long long n;
   long long a[200],s[200],cnt=0;
   long long i,j,k,temp=-1,sum=0;
   long long pre=0,curr=0,tr=0;

int main(){
  

   cin >> n;
   for(i=1;i<=n;i++){
      cin >> a[i];
      sum+=a[i];
      s[i]=sum;
   }
   s[n+1]=s[n];
   for(i=1;i<=n;i++){
      pre=s[i-1];
      for(j=i;j<=n;j++){
          curr=j-i+1;
          tr=s[j]-s[i-1];
          if(temp < (curr-tr+s[n+1]-s[j]+s[i-1])){
            temp=curr-tr+s[n+1]-s[j]+s[i-1];
          }
      }
   }

   
   cout << temp;  

   return 0;

}