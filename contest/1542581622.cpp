#include <bits/stdc++.h>

using namespace std;

int main(){
  char a,b;cin>>a>>b;
  string pw="";
  pw+=a;
  pw+=b;
  int n;cin>>n;
  vector<string>s;
  for(int i=0;i<n;i++){
   string c; cin>>c;
   s.push_back(c);
  }

for(int i=0;i<n;i++){
  if(s[i]==pw){
    cout << "YES";
    return 0;
  }
}
  bool ans=false;
  bool t=false;
  for(int i=0;i<n;i++){
   if(s[i][1]==a)
   {
     for(int j=0;j<n;j++){
       if(s[j][0]==b)ans=true;
     }
   }
    
  }
    if(ans )cout<<"YES";
    else cout <<"NO";
  
}