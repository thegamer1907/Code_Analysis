#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
ll n,t;
cin >> n>>t;
string s;
cin >> s;
for(ll i=0;i<t;i++){
     for(ll j=0;j<n;)
     {
          if(s[j]=='B'&&s[j+1]=='G') {swap(s[j],s[j+1]);j+=2;}
          else j++;
     }
}
cout << s;
  return 0;
     
}