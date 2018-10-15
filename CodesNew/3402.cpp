#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  int k;
  cin>>k;
  int niz[10012];
  for(int i=0;i<n;i++){
    cin>>niz[i];
  }
  if(n==1){
    cout<<niz[0]+k<<" "<<niz[0]+k;;
    return 0;
  }
  sort(niz,niz+n);
  int l=niz[n-1]+k;

  for(int i=n-1;i>=0;i--){
   
  k=k-(niz[n-1]-niz[i]);
    niz[i]=niz[n-1];
  
  }
  if(k<=0){
    cout<<niz[n-1]<<" ";
    cout<<l;
    return 0;
  
    }else{
      while(k>0){
        k=k-n;
        
        for(int j=0;j<n;j++){
            niz[j]++;
        }
     
         
        } 
        cout<<niz[n-1]<<" "; 
          cout<<l;
          return 0;
    }
  }

        
      
      
   

  
  

  
