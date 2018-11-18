#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
using namespace std;
#define mem(a,b) memset(a,b,sizeof(a))
#define ll long long
#define INF 0x3f3f3f3f
#define maxn 100000+5
#define eps 1e-12
#define mod 1000000007
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-') f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') {x=10*x+ch-'0';ch=getchar();}
    return x*f;
}
int main()
{
   string s1,s;
   cin>>s1;
   int n=read();
   int flag1=0,flag2=0;
   for(int i=1;i<=n;++i)
   {
       cin>>s;
       if(s==s1||(s[0]==s1[1]&&s1[0]==s[1])) 
       {
           cout<<"YES"<<endl;
           return 0;
       }
       else
       {
           if(s[1]==s1[0]) flag1=1;
           if(s[0]==s1[1]) flag2=1;
       }
       if(flag1&&flag2)
       {
           cout<<"YES"<<endl;
           return 0;
       }
   }
   cout<<"NO"<<endl;
   return 0;
}