#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c,d;
    cin>>c>>d;
    int n,i,j;
    cin>>n;
    char a[n],b[n];
    for(i=0;i<n;i++)
     cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
    {
      if(a[i]==c&&b[i]==d)
      {
        cout<<"YES";
        return 0;
      }
    }
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
    {
        if(a[i]==d&&b[j]==c)
        {
          cout<<"YES";
          return 0;
        }
    }
    cout<<"NO";
    return 0;
}
