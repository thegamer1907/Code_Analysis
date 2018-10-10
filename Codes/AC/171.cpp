#include<bits/stdc++.h>

using namespace std;



int search(long int small[],long int large[],int size,int low,int high,int num){

   
  int mid = (low+high)/2;
  
  if(small[mid] <= num && large[mid] >= num)
    return mid;
  
  else if(small[mid] > num)
    return search(small,large,size,low,mid-1,num);
  else if(large[mid] <  num)
    return search(small,large,size,mid+1,high,num);
}


int main(){
  int n;
  cin>>n;
  
  long int small[n],large[n];
  
  for(int i = 0;i<n;i++){
    if(i==0)
      small[i] = 1;
    else
      small[i] = large[i-1]+1;
    
    int k;
    cin>>k;
    large[i] = small[i]+k-1;
  }
  
  int t;
  cin>>t;
  while(t--){
    int num;
    cin>>num;
    cout<<search(small,large,n,0,n-1,num)+1<<endl;
  }
  

}
