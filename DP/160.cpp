#include<bits/stdc++.h>
using namespace std;



int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
     cin>>n;
     vector<int>a(n);
   
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     cin>>m;
     vector<int>b(m);
     for(int i=0;i<m;i++)
     {
         cin>>b[i];
     }
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }cout<<endl;
    // for(int i=0;i<m;i++)
    // {
    //     cout<<b[i]<<" ";
    // }cout<<endl;
     int i=0,j=0,c=0;
     while(i<n && j<m)
     {  
         if(abs(a[i]-b[j])<=1)
         {  i++;j++;
             c++;
         }
         else if(a[i]<b[j])
         {
           i++;  
         }
         else
         {
             j++;
         }
     }
     cout<<c<<endl;
     
     
  return 0;
}