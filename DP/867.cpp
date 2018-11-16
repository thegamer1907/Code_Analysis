#include<bits/stdc++.h>
using namespace std;



int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);int c=0;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]==1){b[i]=-1;c++;}else{b[i]=1;}
     }
      //after use dp-maximum subarray sum concept
     int si=0,ei=0,max1=b[0],currentmax=b[0];
      for(int i=1;i<n;i++)
      {
          currentmax=max(currentmax+b[i],b[i]);
          max1=max(max1,currentmax);
      }
      cout<<max1+c<<endl;
          
     
  return 0;
}