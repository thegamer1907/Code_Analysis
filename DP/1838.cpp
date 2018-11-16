#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;int k=-1;
  int x=s.find("AB"),y=s.find("BA");
  if((s.find("AB")!=k && s.find("BA",x+2)!=k)||(s.find("BA")!=k && s.find("AB",y+2)!=k))cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}
