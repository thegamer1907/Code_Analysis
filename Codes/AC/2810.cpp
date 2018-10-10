#include<bits/stdc++.h>
using namespace std;
vector<int> z_function(const string & s) {
  vector<int> z(s.size());
  int i,l,r;
  for(i=1,l=0,r=0;i<z.size();i++) {
    if(i<=r)
      z[i]=min(r-i+1,z[i-l]);
    while(i+z[i]<z.size()&&s[z[i]]==s[i+z[i]])
      z[i]++;
    if(r<i+z[i]-1)
      l=i,r=i+z[i]-1;
  }
  return z;
}
int main(){
    string cad;
    cin>>cad;
    vector<int> z;
    z=z_function(cad);
    long long int n=cad.size();
    int maxz = 0, res = 0,i;
    for (int i = 1; i < n; i++) {
    if (z[i] == n-i && maxz >= n-i) { res = n-i; break; }
        maxz = max(maxz, z[i]);
    }
    if(res==0){
        cout<<"Just a legend";
    }
    else {
        for(i=0;i<res;i++)cout<<cad[i];
    }
}
