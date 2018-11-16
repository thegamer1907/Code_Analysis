#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
lli n,x,y,k;
vector<pair<lli,lli> >v;
vector<lli>a,b;
lli ans=0;
string t,p,s1,s2;
int main(){
  _
  cin>>n>>k;
  for(lli i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
  }
  for(lli i=0;i<k;i++){
    cin>>x;
    b.push_back(x);
  }
  sort(b.begin(),b.end());
  // reverse(b.begin(),b.end());
  lli p=k-1;
  for(lli i=0;i<n;i++){
    if(a[i]==0){
      a[i]=b[p];
      p--;
    }
  }
  lli flag=1;
    vector<lli> c=a;
    sort(c.begin(),c.end());
    // for(lli i=0;i<n;i++){
    //    cout<<c[i]<<" ";
    // }
    // cout<<endl;
    // for(lli i=0;i<n;i++){
    //    cout<<c[i]<<" ";
    // }
    for(lli i=0;i<n;i++){
      if(c[i]!=a[i]){
        flag=0;
      }
    }
  if(flag==1){
    cout<<"No";
  }
  else{
    cout<<"Yes";
  }
}
