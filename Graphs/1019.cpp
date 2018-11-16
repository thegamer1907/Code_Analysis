#include <bits/stdc++.h>
using namespace std;

int main()
{
      int i,n,t,pos=1;
      bool flag=false;
      cin >> n >> t;
      vector<int> a(n);
      for(i=0;i<n;i++)
      {
            cin >> a[i];
      }
      
      while(pos<=n)
      {
            if((pos+a[pos-1])==t)
            {
                  flag=true;
                  break;
            }
            if((pos+a[pos-1])>t)
            break;
            
            pos=pos+a[pos-1];
      }
      
      if(flag)
      cout << "YES" << endl;
      else
      cout << "NO" << endl;
      
      return 0;
}