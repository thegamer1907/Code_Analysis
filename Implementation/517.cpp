#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int n, k, temp;
  cin>>n>>k;
  vector<int> scores;
  ll count = 0;
  for(int i=0;i<n;i++){
    cin>>temp;
    scores.push_back(temp);
  }
  k = scores[k-1];
  for(int i=0;i<n;i++){
    if(scores[i]>=k && scores[i]>0)
      count++;
    else
      break;
  }
  cout<<count<<endl;
  return 0;
}
