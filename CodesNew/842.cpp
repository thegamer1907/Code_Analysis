#include <cstdio>
#include<cstring>
#include<string>
using namespace std;
struct node{
string data;
}S[1001];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i){
         char t[10000];
      scanf("%s",t);
    S[i].data=t;
    }

      int ct=0;
    for(int i=0;i<m;++i){
      char t[10000];
      scanf("%s",t);
      for(int k=0;k<n;++k){
         if(S[k].data==t){
            ct++;
            break;
         }
      }
    }
    n-=ct;
    m-=ct;
    if(ct&1)
      n++;
    printf("%s\n",n<=m?"NO":"YES");
    return 0;
}