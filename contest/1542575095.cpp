#include <bits/stdc++.h>

using namespace std;
int h[30];
bool ok(int x){
  int k=-1,p=x;
  while (p) {
    k++;p>>=1;
  }
  for (int i=0;i<16;i++){
    if (h[i] && (i&(1<<k))==0) return 1;
  }
  return 0;
}

bool check(int x){
  int i,j;

  for (i=0;i<16;i++){
    if (h[x] && h[i] && (i&x)==0) return 1;
  }
  return 0;
}
int main()
{
    int n,k,i,j,flag,x;
    while (cin>>n>>k){
       memset(h,0,sizeof(h));
       for (i=1;i<=n;i++){
          int s=0;
          for (j=1;j<=k;j++){
            scanf("%d",&x);
            s=s*2+x;
          }
          h[s]++;
       }
       flag=0;
       if (h[0]) flag=1;
       if (k==2){
          if (h[1] && h[2]) flag=1;
       }
       if (k==3){
          if (h[1] && (h[4] || h[2] || h[6])) flag=1;
          if (h[2] && (h[4] || h[1] || h[5])) flag=1;
          if (h[4] && (h[1] || h[2] || h[3])) flag=1;
       }
       if (k==4){
          for (i=1;i<=8;i<<=1) if (h[i] && ok(i)) flag=1;
          if (check(12) || check(9) || check(10) || check(3) || check(5) || check(6)) flag=1;
       }
       if (flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
