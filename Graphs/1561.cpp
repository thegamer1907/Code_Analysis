#include<bits/stdc++.h>
using namespace std;


int main()
{  
    int a,b,i,pos=1;
    cin>>a>>b;
    int c[a];
    for( i=0;i<a;i++)
    cin>>c[i];
    
    while(1)
    {
          if(c[pos-1]+pos==b)
          {
               cout<<"YES";
               break;
          }
          else if(c[pos-1]+pos>b)
          {
               cout<<"NO";
               break;
          }
          else
          pos+=c[pos-1];
    }
    return 0;
}