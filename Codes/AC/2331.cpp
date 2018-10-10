#include<bits/stdc++.h>
#define faster ios::sync_with_stdio(false);cin.tie(0);
#define lld long long int
#define vi  vector< lld >
#define NUM (lld)(1e7+7)

using namespace std;

lld factor[NUM];
lld dp[NUM];

int main(){


  faster
  lld n;
  cin>>n;
  vi input(n);
  for(int i = 0;i<n;i++)
    cin>>input[i];
  
  for(int i = 1;i<NUM;i++) factor[i] = i;
    
  for(lld i =2 ;i<NUM;i++){
    if(factor[i] != i)
      continue;
    for(lld j = i*2;j<NUM;j= j+i)
      factor[j] = i;
  }
  
  vector< set< lld > > process(n);
  for(int i = 0;i<n;i++){
    lld a = input[i];
    while(factor[a] != a){
      process[i].insert(factor[a]);
      a = a/factor[a];
    }
    process[i].insert(a);
  }

  for(lld i = 0;i<NUM;i++) dp[i] = 0;  
  
  for(int i =0;i<n;i++){
    set< lld >::iterator it;
    for(it = process[i].begin();it!=process[i].end();it++)
      dp[*it]++;
  }
     
  for(lld i = 2;i<NUM;i++)
    dp[i] += dp[i-1];
    
  lld q;
  cin>>q;
  for(int i = 0;i<q;i++){
    lld l,r;
    cin>>l>>r;
    r = (r>NUM-1)?NUM-1:r;
    l = (l>NUM-1)?NUM-1:l;
    cout<<dp[r]-dp[l-1]<<endl;
  }
    
}
