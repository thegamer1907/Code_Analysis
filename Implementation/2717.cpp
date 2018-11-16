#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;
int a[maxn];
int b[maxn];
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    b[a[i]]=i;
  }
  for(int i=1;i<=n;i++){
    cout<<b[i]<<" ";
  }
cout<<endl;
}
