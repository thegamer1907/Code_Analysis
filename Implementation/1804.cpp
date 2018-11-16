#include <bits/stdc++.h>
#define fori(i,a,b) for(int i=a,b_=b;i<=b_;++i)
using namespace std;

int main()
{
  string a;
  cin >> a;
  int dd=1;
  fori(i,1,a.size()-1)
  {
    if(a[i]!=a[i-1])
    {
      if(dd>=7){ cout << "YES"; return 0; }
      dd=1;
    }
    else dd++;
  }
  if(dd>=7) cout << "YES";
  else cout << "NO";
}
