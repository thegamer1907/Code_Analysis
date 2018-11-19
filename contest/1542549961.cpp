#include <iostream>
#include <string.h>
#include <string>

using namespace std;


int main()
{
  string ch;
  cin>>ch;
  int n,i;
  cin>>n;
  string T[100];
  bool r,l;
  r=0;
  l=0;
  for(i=0;i<n;i++)
  {
      cin>>T[i];
      if (T[i][0]==ch[1])
       {
        r=1;
       }
        if (T[i][1]==ch[0])
       {
        l=1;
       }
       if(T[i]==ch)
       {
           r=1;
           l=1;
       }

  }
  if (l&&r)
  {
      cout<<"YES";
  }
  else
  {
      cout<<"NO";
  }
}
