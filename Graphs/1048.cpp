#include<bits/stdc++.h>
using namespace std;

int main(){

  long long int n,t,currloc;
  cin>>n>>t;
  currloc = 1;
  vector<int> str(n-1);
  for(int i = 0; i < n - 1; i++) cin>>str[i];
  while(currloc <= t){
    if(currloc == t){
        cout<<"YES";
        return 0 ;
    }
    currloc = currloc + str[currloc - 1];
  }
  cout<<"NO";
}