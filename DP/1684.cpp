#include<bits/stdc++.h>
using namespace std;
int main()
{   int flag1=0;int flag2=0;
    string  ss;
    string  aa;
    cin>>ss;
     aa=ss; 
   for(int i=0;i<ss.size();i++)
    {
     if(ss[i]=='A'&&ss[i+1]=='B')
       {
        ss[i]=ss[i+1]='0';
          flag1=1;
      break;
        }
     }
     for(int i=0;i<ss.size();i++)
    {
       if(ss[i]=='B'&&ss[i+1]=='A')
       {
        ss[i]=ss[i+1]='0';
          flag2=1;
        break;
        }
    }
    if(flag1&&flag2)
   { cout<<"YES"<<endl;return 0;
    }
   flag1=flag2=0;
   for(int i=0;i<aa.size();i++)
    {
       if(aa[i]=='B'&&aa[i+1]=='A')
       {
        aa[i]=aa[i+1]='0';
          flag2=1;
        break;
        }
    }
   for(int i=0;i<aa.size();i++)
    {
     if(aa[i]=='A'&&aa[i+1]=='B')
       {
        aa[i]=aa[i+1]='0';
          flag1=1;
      break;
        }
     }
  if(flag1&&flag2)
  cout<<"YES"<<endl;
else cout<<"NO"<<endl;
       
   
}