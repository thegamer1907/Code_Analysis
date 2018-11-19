#include<bits/stdc++.h>
using namespace std;
int main()
{  void ans();
     string s;
  cin>>s;
  int n;
  cin>>n;
  string w[n];
  for(int i=0;i<n;i++)
  { cin>>w[i];
    }
    int t=0,p=0,m=0;
    for(int i=0;i<n;i++)
        if(s!=w[i])
        m++;

    if(m==n)
   {
     for(int i=0;i<n;i++)
    { if(s[0]==w[i][1])
       t++;
       if(s[1]==w[i][0])
        p++;
     }

     if(t>=1&&p>=1)
     cout<<"yes";
     else
     cout<<"NO";}
     else
        cout<<"YES";


  }
