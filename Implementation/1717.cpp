#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{int n,i,p=0;
 string s;
 cin>>s;
 n=s.length();
 for(i=1;i<n;i++)
 {if(s[i-1]==s[i])
   {p=p+1;
    if(p==6)
    {cout<<"YES";
      exit(0);
     }
    }
  else
    p=0;
    }
    cout<<"NO";
    return 0;
    }
