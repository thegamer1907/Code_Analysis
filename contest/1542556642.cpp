#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
       char c1,c2;
       cin>>c1>>c2;
       int n;
       cin>>n;
       bool flag1=0,flag2=0;
       while(n--)
       {
           char a1,a2;
           cin>>a1>>a2;
           if(a1==c2)
           flag1=1;
           if(a2==c1)
           flag2=1;
           if(a1==c1 && a2==c2)
           flag1=1,flag2=1;
       }
       if(flag1 && flag2)
       cout<<"YES";
       else
       cout<<"NO";
}
 
