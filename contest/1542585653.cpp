#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define inf 999999999999999999
#define fr(a,n) for(ll i=a;i<=n;i++)
#define sc2(x,y) scanf("%lld%lld",&x,&y);
#define sc1(x)  scanf("%lld",&x);
#define print2(x,Y) printf("%lld %lld",x,y);
#define print1(x) printf("%lld",x);
#define fd(i,a,b)   for(long long i=b;i>=a;i--)
#define clr(x)      memset(x,0,sizeof(x))
#define cln(x)      memset(x,-1,sizeof(x))
#define __          printf(" ")
#define _           printf("\n")
#define read()      freopen("in.txt","r",stdin)
#define write()     freopen("out.txt","w",stdout)
int main()
{
    char  str1[10];
    char  str[10];

    while(cin>>str)
   {
       int n;
       cin>>n;
       getchar();
       int c1=0,c2=0,ck=0;

       for(int i=1;i<=n;i++)
       {
           cin>>str1;
           if(str[0]==str1[1])
             c1=1;
           if(str[1]==str1[0])
            c2=1;
            if((str[0]==str1[0]&&str[1]==str1[1])||(str[0]==str1[1]&&str[1]==str1[0]))
                ck=1;
       }
       if((c1==1&&c2==1)||ck==1)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;

   }
}

