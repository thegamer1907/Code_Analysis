#include<bits/stdc++.h>
using namespace std;

int main()
{
    double  h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(s!=0)
         m+=0.5;
    if(m!=0)
         h+=0.5;
    if(m==0)
          m=60;
    if(s==0)
          s=60;
    if(t1==t2)
    {
          cout<<"YES";
          return 0;
    }
    int temp1=t1;
    int temp2=t2;
    t1=min(t1,t2);
    t2=max(temp1,temp2);
    if(t1<=h&&h<=t2&&t1*5<=m&&t2*5>=m&&t1*5<=s&&t2*5>=s)
    {
          cout<<"YES";
          return 0;

    }
    t2=min(temp1,temp2);
    t1=max(temp1,temp2);
     if((t1<=h||h<=t2)&&(t1*5<=m||t2*5>=m)&&(t1*5<=s||t2*5>=s))
    {
          cout<<"YES";
          return 0;

    }
    else
        cout<<"NO";

    return 0;
}