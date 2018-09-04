#include<bits/stdc++.h>
#define f first
#define s second

using namespace std;
long long n,m,i,j,ans,sum,a[1000009],x[1000009],y[10000009],t=1,x1,a1,b1;

int main() {
	
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  scanf("%d",&a[i]);
x[i]=t;
y[i]=a[i]+t-1;
t=a[i]+t;
}

  scanf("%d",&m);
 for(i=1;i<=m;i++){
 scanf("%d",&x1);
bool ok=false;
     a1=1;b1=n;
     while(a1!=b1)
     {
         if(x1<x[(a1+b1)/2])b1=(a1+b1)/2;
         if(x1>y[(a1+b1)/2])a1=(a1+b1)/2;
         if(x1>=x[(a1+b1)/2] && x1<=y[(a1+b1)/2]){ok=true;cout<<(a1+b1)/2<<endl;break;}
         if(x1>=x[(a1)] && x1<=y[(a1)]){ok=true;cout<<(a1)<<endl;break;}
         if(x1>=x[(b1)] && x1<=y[(b1)]){ok=true;cout<<(b1)<<endl;break;}
//     if((a+1)==b)break;     
     }
     
}
 
  return 0;
}