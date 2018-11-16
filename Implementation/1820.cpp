#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int n;
  cin>>n;
  ll s_x = 0, s_y=0, s_z=0;
  for(int i=0;i<n;i++){
    int x, y, z;
    cin>>x>>y>>z;
    s_x+=x;
    s_y+=y;
    s_z+=z;
  }
  if(s_x==0 && s_y==0 && s_z==0)
    cout<<"YES\n";
  else
    cout<<"NO\n";
  return 0;
}
