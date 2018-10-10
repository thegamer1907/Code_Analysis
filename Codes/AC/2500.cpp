#include<bits/stdc++.h>
using namespace std;
const int N=10000001;
int k[N]={0},a,n,v[N]={0},s[N]={0};


void f()
{int i,x,ans;
for(i=2;i<=N;i++)
 { 
  if(v[i]==1)continue;
 else 
   {for(x=i;x<N;x=x+i)
    {if(k[x]!=0)s[i]=s[i]+k[x];
    v[x]=1;
    }
   }
  }
for(i=1;i<N;i++)
s[i]=s[i]+s[i-1];  
}

int main()
 {int m,i;int x,y;
  scanf("%d", &n);
 for(i=1;i<=n;i++)
  {scanf("%d", &a);k[a]++;
  }
 f(); 
  scanf("%d", &m);
  for(i=1;i<=m;i++)
  { scanf("%d%d", &x,&y);
   if(y>=N)
    y=N-1;
   if(x>=N){
    x=N;
    }
   printf("%d\n", s[y]-s[x-1]); 
  }
  return 0;
  } 