#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int a[105];
int main(){
  int n;
  int m;
  while(~scanf("%d",&n)){
    scanf("%d",&m);
    int maxx=0;
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        maxx=max(a[i],maxx);
    }
    int sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+maxx-a[i];
    }
   //cout<<maxx<<" "<<m<<" "<<sum<<endl;
    if (sum<m){
        if((m-sum)%n==0)
           printf("%d ",maxx+(m-sum)/n);
        else
           printf("%d ",maxx+(m-sum)/n+1);
    }else {
          printf("%d ",maxx);
    }
    printf("%d\n",maxx+m);
  }
  return 0;
}
