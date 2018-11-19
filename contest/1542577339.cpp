#include <iostream>
#include <cstdlib>

using namespace std;

void morir()
{
  cout<<"YES"<<endl;
  exit(0);
}

int n,k;
int hay[16];
int suma[4];

int main()
{
  ios::sync_with_stdio(false);
  cin>>n>>k;
  for (int i=0;i<n;i++) {
    int x=0;
    for (int j=0;j<k;j++) {
      int b;
      cin>>b;
      x=2*x+b;
    }
    hay[x]=1;
  }
  for (int c=1;c<1<<(1<<k);c++) {
    bool error=false;
    for (int b=0;b<(1<<k) and not error;b++)
      error=(c&(1<<b))!=0 and not hay[b];
    if (error) continue;
    for (int i=0;i<k;i++)
      suma[i]=0;
    for (int b=0;b<(1<<k);b++)
      if (c&(1<<b))
	for (int j=0;j<k;j++)
	  suma[j]+=(b&(1<<j))!=0;
    for (int j=0;j<k and not error;j++)
      error=__builtin_popcount(c)<2*suma[j];
    if (not error) morir();
  }
  cout<<"NO"<<endl;
}

