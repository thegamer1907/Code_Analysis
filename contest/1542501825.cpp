#include<bits/stdc++.h>
using namespace std;
 void work()
{
  string a,m,b;
  int n,c;
  bool t=false,f=false;
  cin>>a>>n;
   for(int i=0;i<n;i++)
   {

    cin>>m;
   if((a[0]==m[0])&&(a[1]==m[1]))

    {
      cout<<"YES"<<endl;
      return ;
    }
    if((a[1]==m[0]))

       t=true;
    if(a[0]==m[1])

       f=true;

    if(f&&t)
    {
       cout<<"YES"<<endl;
       return ;
    }}
    cout<<"NO"<<endl;
  }

int main()
{
   work();
   return 0;
}

