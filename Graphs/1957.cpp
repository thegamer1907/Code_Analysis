#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N=105;
int n,m,b[N],g[N],vis[N],ans,bvis[N];
int main(){
cin>>n;
for(int i=0;i<n;i++)
    cin>>b[i];
sort(b,b+n);
cin>>m;
for(int i=0;i<m;i++)
    cin>>g[i];
sort(g,g+m);

for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    if(abs(b[j]-g[i])<2 && bvis[j]==0){
        ans++;
        bvis[j]=1;
        break;
    }
  }
}
cout<<ans<<endl;

return 0;
}
