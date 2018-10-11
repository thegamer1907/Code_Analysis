# include <iostream>
#include <map>
using namespace std;
int n,m,sam;
map<string,int> fixa;
string a[10005],b[10005];
int main()
{
  cin>>n>>m;
  for (int i=1; i<=n; i++)
  {
      cin>>a[i];
      fixa[a[i]]++;
  }
  for (int i=1; i<=m; i++)
  {
    cin>>b[i];
    fixa[b[i]]++;
    if(fixa[b[i]]==2) sam++;
  }
  if (sam%2==1) 
  {
    if (n+sam+1>m+sam) cout<<"YES";else cout<<"NO";  
  }
  if (sam%2==0) 
  {
    if (n+sam>m+sam) cout<<"YES"; else cout<<"NO";
  }
}