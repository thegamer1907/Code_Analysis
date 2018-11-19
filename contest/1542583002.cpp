#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{int h,m,s,t1,t2,i;bool flag1=0,flag2=0;
 scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
 h*=5;t1*=5;t2*=5;
 if(h==60)h=0; 
 if(t1==60)t1=0;
 if(t2==60)t2=0;
 if(t1>t2)swap(t1,t2);
 for(i=t1;i<=t2-1;i++)
  if(i==h||i==m||i==s)
   {flag1=1;break;
   }
 if(flag1==0)
  {cout<<"YES";return 0;
   } 
 else 
 {
   for(i=t2;i<=59;i++)
    if(i==h||i==m||i==s)
     {flag2=1;break;
     }
   for(i=t1-1;i>=0;i--)
    if(i==h||i==m||i==s)
     {flag2=1;break;
     }  
    if(flag2==0)cout<<"YES";
	else cout<<"NO";return 0; 
 }	 
} 