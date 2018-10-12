#include<bits/stdc++.h>
#define lld long long int
#define faster ios_base::sync_with_stdio(false);cin.tie(0);
#define trace(x) cerr<<#x<<": "<<x<<'\n';
#define trace2(a,n) cerr<<#a<<": ";for(int i=0;i<n;i++)cerr<<a[i]<<" "; cerr<<'\n'; 
#define TM

using namespace std;

int main(){

  int n;
  cin>>n;
  
  vector< string > input(n);
  for(int i=0;i<n;i++) cin>>input[i];
  
  for(int i=n-1;i>0;i--){
    int x = input[i].length();
    int y = input[i-1].length();
    int j;
    for(j=0;j<x && j<y;j++){
      if(input[i-1][j]>input[i][j]){
        input[i-1]  = input[i-1].substr(0,j);
        break;
      }
      else if(input[i-1][j]<input[i][j])break;
    }  
    if(j==x) input[i-1] = input[i-1].substr(0,j);
  }
  for(int i=0;i<n;i++)cout<<input[i]<<'\n';
}
