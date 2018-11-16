#include <bits/stdc++.h>

using namespace std;

int n, p[10005],c[10005],total;

int main()
{
  cin>>n;
  for (int i=1;i<n;i++)
    cin>>p[i+1];

  for (int i=1;i<=n;i++)
    cin>>c[i];

  for (int i=1;i<=n;i++)
    if (c[i]!=c[p[i]])
      total++;

  cout<<total;
}
