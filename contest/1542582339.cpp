#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#define RG register
#define il inline
#define iter iterator
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
using namespace std;
char s[105][105],pas[105];
void work()
{
   scanf("%s",pas+1);
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
      scanf("%s",s[i]+1);
   for(int i=1;i<=n;i++){
      if(s[i][1]==pas[1] && s[i][2]==pas[2]){
        puts("YES");return ;
      }
      for(int j=1;j<=n;j++)
         if(s[i][2]==pas[1] && s[j][1]==pas[2]){
            puts("YES");return ;
         }
   }
   puts("NO");
}

int main()
{
	work();
	return 0;
}
