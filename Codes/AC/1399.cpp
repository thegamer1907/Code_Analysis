#include<bits/stdc++.h>
#define lld long long int
#define vi vector < lld >

using namespace std;


lld val(lld k,vi input){

  vi process = input;
  for(int i = 0;i<process.size();i++)
    process[i] += k*(i+1);
  
  sort(process.begin(),process.end());
  
  lld sum = 0;
  for(int i =0;i<k;i++)
    sum += process[i];
  return sum;

}


void calc(int n,lld max,vi input){
  
  lld low = 0,high = n;
  lld mid;
  lld value;
  lld minm = 0;
  lld min_value = 0;
  while(low<=high){
    mid = (low+high)/2;
    value = val(mid,input);
    if(value <= max){
      low = mid+1;
      minm = mid;
      min_value = value;
    }
    else if(value > max)
      high = mid-1;
  
  }

  cout<<minm<<" "<<min_value<<endl;    
}

int main(){
  
  ios::sync_with_stdio(false);
  
  int n;
  lld max;
  cin>>n>>max;
  vi input;
  for(int i =0;i<n;i++){
    lld num;
    cin>>num;
    input.push_back(num);
  }
  calc(n,max,input);

}
