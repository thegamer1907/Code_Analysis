#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,tot1=0,tot2=0,tot3=0,x1,x2,x3;
  cin>>n;
  for(int i=0;i<n;i++) {
    cin>>x1>>x2>>x3;
    tot1+=x1;
    tot2+=x2;
    tot3+=x3;
  }
  if(tot1!=0 || tot2!=0 || tot3!=0) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
}