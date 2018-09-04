#include<bits/stdc++.h>
using namespace std;
void b_search(int arr[],int n,int num) {
    int a=0,b=n,mid=n/2;
    bool x=true;
    for (;(b-a)>1;mid=(a+b)/2) {
        if (arr[mid]>num) b=mid;
        else if (arr[mid]<num) a=mid;
        else {x=false; break;}
    }
    if (x) mid++;
    printf("%d\n",mid);
}
int main() {
   int n,m;
   scanf("%d",&n);
   int a[n+1],sum[n+2];
   sum[0]=0;sum[n-1]=1000001;
   for (int i=1;i<=n;i++) {
     cin>>a[i];
     sum[i]=sum[i-1]+a[i];
   }

   scanf("%d",&m);
   int q[m+1];
   for (int i=1;i<=m;i++) {
     cin>>q[i];
   }

   for (int i=1;i<=m;i++) {
     b_search(sum,n+2,q[i]);
   }
}
