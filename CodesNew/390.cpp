#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
using namespace std;

 int l=0, r=0, bb = 0 , sum = 0;

int main(){
  int n,t;
  scanf("%d %d",&n, &t);
  vector <int> vec (n);
  for(int i = 0 ; i < n ; i++)
  scanf("%d",&vec[i]);
  while(r < n)
  {
      

    if(sum < t){
      
      sum+=vec[r];

      //cout<<"sum"<<sum<<"t"<<t<<endl;

      if(sum <= t) {bb = max(bb,( (r+1)-l) );
      //cout<<r+1-l<<endl;
      }

      r++;
      }
      
    else{
      sum-=vec[l];
      l++;
    }
    
  }

  cout<<bb<<endl;

}