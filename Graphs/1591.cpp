#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i, j, n, t;

  cin>>n>>t;
  vector<int> v(n+1, 0);

  for(i=1; i<n; i++)
  {
    cin>>v[i];
  }

  vector<int> arr(n+1, 0);
  for(i=1; i<=n; i++)
  {
    arr[i] = i + v[i];
  }

  int flag = 0;
  i = 1;
  while(t>=i)
  {
    i = arr[i];
    if(t == i)
    {
      flag = 1;
      break;
    }
  }

  if(flag == 1)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
  return 0;
}
