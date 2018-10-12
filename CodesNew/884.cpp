#include <iostream>
#include <map>
using namespace std;

int main()
{
  int n,m,i;
  string ps[1001],es[1001];
  int poland_ball=0,enemy_ball=0,share=0;
  map<string,int>p;
  map<string,int>e;
  cin>>n>>m;
  for (i=0;i<n;i++){
    cin>>ps[i];
    p[ps[i]]=1;
  }
  for (i=0;i<m;i++){
    cin>>es[i];
    e[es[i]]=1;
  }
  for (i=0;i<n;i++){
    if (e[ps[i]]==1)
      share++;
    else
      poland_ball++;
  }
  for (i=0;i<m;i++){
    if (p[es[i]]!=1)
      enemy_ball++;
  }
  if (share%2==1)
    poland_ball++;
  if (poland_ball>enemy_ball)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
