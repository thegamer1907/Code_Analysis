#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int N,M; int num[18]; int A[5]; int bit[5];
vector<int>V[5]; int tot[5]; int p=0;
int main()
{
  scanf("%d%d",&N,&M); for(int i=1;i<=M;i++) bit[i]=(1<<(i-1));

  memset(num,0,sizeof(num)); 
  for(int i=1;i<=N;i++)
  {
    int s=0;
    for(int j=1;j<=M;j++) scanf("%d",&A[j]),s+=bit[j]*A[j];
    num[s]++;
  }

  for(int i=0;i<(1<<M);i++)
  {
    int s=0;
    for(int j=1;j<=M;j++) if(i&bit[j]) s++;
    V[s].push_back(i);
  }
  
  int ful=(1<<M)-1;

  if(num[0]){printf("YES\n"); return 0;}

  if(M==1){printf("NO\n"); return 0;}
  else if(M==2)
  {
    int now=min(num[1],num[2]);
    p+=now*2; tot[1]+=now; tot[2]+=now; num[1]-=now; num[2]-=now;
    if(!p){printf("NO\n"); return 0;}
    if(tot[1]*2<=p && tot[2]*2<=p){printf("YES\n"); return 0;}
    else{printf("NO\n"); return 0;}
  }
  else if(M==3)
  {
  	int now=min(num[4],min(num[1],num[2]));
  	p+=now*3; tot[1]+=now; tot[2]+=now; tot[3]+=now;

  	num[1]-=now; num[2]-=now; num[4]-=now;

  	for(int i=0;i<V[1].size();i++)
  	  for(int j=0;j<V[1].size();j++)
  	   {
  	     int x=V[1][i]; int y=V[1][j];
         if((x&y)==0)
         {
            int now=min(num[x],num[y]); int pp=x|y;
            p+=now*2; for(int q=1;q<=3;q++) if(pp&bit[q]) tot[q]+=now;
            num[x]-=now; num[y]-=now;
         }
  	   }

    for(int i=0;i<V[2].size();i++)
      for(int j=0;j<V[1].size();j++)
      {
        int x=V[2][i]; int y=V[1][j];
        if((x&y)==0)
        {
          int now=min(num[x],num[y]); int pp=x|y;
          p+=now*2; for(int q=1;q<=3;q++) if(pp&bit[q]) tot[q]+=now;
          num[x]-=now; num[y]-=now;
        }
      }
    if(!p){printf("NO\n"); return 0;}
    if(tot[1]*2<=p && tot[2]*2<=p && tot[3]*2<=p){printf("YES\n"); return 0;}
    else{printf("NO\n"); return 0;}
  }
  else if(M==4)
  {
    int now=min(min(num[1],num[2]),min(num[4],num[8]));
    p+=now*4; tot[1]+=now; tot[2]+=now; tot[3]+=now; tot[4]+=now;

    num[1]-=now; num[2]-=now; num[4]-=now; num[8]-=now;

    for(int i=0;i<V[2].size();i++)
      for(int j=0;j<V[1].size();j++)
        for(int k=0;k<V[1].size();k++)
        {
          int x=V[2][i]; int y=V[1][j]; int z=V[1][k];
          if((x|y|z)==ful)
          {
            int now=min(min(num[x],num[y]),num[z]); int pp=x|y|z;
            p+=now*3; for(int q=1;q<=4;q++) if(pp&bit[q]) tot[q]+=now;
            num[x]-=now; num[y]-=now; num[z]-=now;
          }
        }

    for(int i=0;i<V[1].size();i++)
      for(int j=0;j<V[1].size();j++)
        for(int k=0;k<V[1].size();k++)
        {
          int x=V[1][i]; int y=V[1][j]; int z=V[1][k];
          if(x!=y && y!=z && x!=z)
          {
            int now=min(min(num[x],num[y]),num[z]); int pp=x|y|z;
            p+=now*3; for(int q=1;q<=4;q++) if(pp&bit[q]) tot[q]+=now;
            num[x]-=now; num[y]-=now; num[z]-=now;
          }
        }

    for(int i=0;i<V[1].size();i++)
      for(int j=0;j<V[1].size();j++)
      {
        int x=V[1][i]; int y=V[1][j];
        if((x&y)==0)
        {
          int now=min(num[x],num[y]); int pp=x|y;
          p+=now*2; for(int q=1;q<=4;q++) if(pp&bit[q]) tot[q]+=now;
          num[x]-=now; num[y]-=now;
        }
      }

    for(int i=0;i<V[1].size();i++)
      for(int j=0;j<V[2].size();j++)
      {
        int x=V[1][i]; int y=V[2][j];
        if((y&x)==0)
        {
          int now=min(num[x],num[y]); int pp=x|y;
          p+=now*2; for(int q=1;q<=4;q++) if(pp&bit[q]) tot[q]+=now;
          num[x]-=now; num[y]-=now;
        }
      }

    for(int i=0;i<V[1].size();i++)
      for(int j=0;j<V[3].size();j++)
      {
        int x=V[1][i]; int y=V[3][j];
        if((y&x)==0)
        {
          int now=min(num[x],num[y]); int pp=x|y;
          p+=now*2; for(int q=1;q<=4;q++) if(pp&bit[q]) tot[q]+=now;
          num[x]-=now; num[y]-=now;
        }
      }

    for(int i=0;i<V[2].size();i++)
      for(int j=0;j<V[2].size();j++)
      {
        int x=V[2][i]; int y=V[2][j];
        if((y&x)==0)
        {
          int now=min(num[x],num[y]); int pp=x|y;
          p+=now*2; for(int q=1;q<=4;q++) if(pp&bit[q]) tot[q]+=now;
          num[x]-=now; num[y]-=now;
        }
      }

    if(!p){printf("NO\n"); return 0;}
    if(tot[1]*2<=p && tot[2]*2<=p && tot[3]*2<=p && tot[4]*2<=p ){printf("YES\n"); return 0;}
    else{printf("NO\n"); return 0;}
  }
  return 0;
}