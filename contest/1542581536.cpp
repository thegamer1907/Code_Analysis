#include <bits/stdc++.h>
#define mk make_pair
#define fs first
#define sc second
using namespace std;
typedef long long ll;
typedef long double ld;
int mp[100];
int main(){
  int a[4], n, k;
  while(cin>>n>>k){
    vector <int> v;
    memset(mp, -1, sizeof mp);
    for(int i=0; i<n; ++i){
      int tmp=0;
      for(int j=0; j<k; ++j){
        scanf("%d",&a[j]);
        if(a[j])
          tmp|=(1<<j);
      }
//      cout<<"^"<<tmp<<endl;
      if(mp[tmp]==-1){
        v.push_back(tmp);
        mp[tmp]=1;
      }
    }
    int cnt, tmp;
    bool l=0;
    a[0]=a[1]=a[2]=a[3]=0;
    for(int i=1; i<(1<<v.size()); ++i){
      cnt=0;
      a[0]=a[1]=a[2]=a[3]=0;
//      cout<<"tmp="<<tmp<<endl;
      for(int j=0; j<v.size(); ++j){
        tmp=v[j];
        if(i&(1<<j)){
          ++cnt;
          for(int f=0; f<k; ++f){
            a[f]+=(tmp&(1<<f)) > 0;
          }
        }
      }
//      cout<<cnt<<endl;
      l=1;
      for(int j=0; j<k; ++j){
//        cout<<j<<"::"<<a[j]<<endl;
        if(a[j]>cnt/2){
          l=0;
          break;
        }
      }
      if(l)
        break;
    }
    if(l)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}


