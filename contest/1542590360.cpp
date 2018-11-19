#include<queue>
#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
#define RG register
#define LL long long
#define fre(a) freopen(a".in","r",stdin);//freopen(a".out","w",stdout);
using namespace std;
int f1,f2,n;
char s[10];
char a,b,c,d;
int main()
{
   //fre("1");
   scanf("%s",s+1);
   a=s[1],b=s[2];
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
      {
	 scanf("%s",s+1);
	 c=s[1],d=s[2];
	 if(c==a&&d==b)
	    {
	       printf("YES\n");
	       return 0;
	    }
	 if(d==a)f1=1;
	 if(c==b)f2=1;
	 if(f1&&f2)
	    {
	       printf("YES\n");
	       return 0;
	    }
      }
   printf("NO\n");
   return 0;
}
