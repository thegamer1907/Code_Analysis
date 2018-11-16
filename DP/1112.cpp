#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        
        
    }
    
    int c=0;int max=0;int curr=0;
     for(int i=0;i<n;i++){
         if(ar[i]==0)
           curr++;
           else if(ar[i]==1&&curr!=0)curr--;
           
          if(max<=curr)max=curr; 
     }
    
    for(int i=0;i<n;i++)
{  if(ar[i]==1)c++;
    
}if(max==0&&n>1)cout<<n-1;
 else if(max==0)cout<<0;
 else
cout<<c+max;
     
}