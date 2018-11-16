#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int N;
vector<int> values;
int prefixSum[110];

void fillPrefixSum() { 
    prefixSum[0] = values[0]; 
    for (int i = 1; i < N; i++) 
        prefixSum[i] = prefixSum[i-1] + values[i]; 
} 

int go(int pos_i){
  if(pos_i>=N){
    return 0;
  }

  int res = 0;

  for(int j=pos_i; j<N; j++){
                 
    int cnt_unos = 0, total_unos = 0;
    
    if(pos_i==0){
         cnt_unos = prefixSum[j];           
    }else{
          cnt_unos = (prefixSum[j] - prefixSum[pos_i-1]);          
    }
    
    int cnt_ceros = ((j - pos_i) + 1) - cnt_unos;
    
    total_unos = prefixSum[N-1] - cnt_unos + cnt_ceros;
    
    res = max(res, total_unos);
  }
  
  res = max(go(pos_i+1), res);
  
  return res;
}


int main() {
  cin>>N;
  for(int i=0; i<N; i++) {
      int k;
      cin>>k;
      values.push_back(k);
  }
  fillPrefixSum();
  cout<<go(0);
  return 0;
}
