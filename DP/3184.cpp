#include <iostream>
#include <cmath>

using namespace std;

const int limit=1000000;

void maximize(int &a,int b)
{
  a=max(a,b);
}

int n;
int a[limit];
int b[limit];
int sol;

int main()
{
  ios::sync_with_stdio(false);
  cin>>n;
  for (int i=1;i<=n;i++)
    cin>>a[i];
  for (int i=1;i<=n;i++) {
    b[i]=1;
    if (1<i and a[i]<=2*a[i-1])
      b[i]=b[i-1]+1;
    maximize(sol,b[i]);
  }
  cout<<sol<<endl;
}
