#include<bits/stdc++.h>
using namespace std;

int main(){
 int t,n;
 cin>>t>>n;
 vector<char> st(t);
 for(int i=0;i<t;i++) cin>>st[i];
 for(int i=0;i<n;i++){
  int j = 0;
  while(j<t){
   if(st[j] == 'B' && st[j+1] == 'G'){
    swap(st[j],st[j+1]);
    j++;
   }
   j++;
  }
 }
 for(auto c:st) cout<<c;
 return 0;
}
