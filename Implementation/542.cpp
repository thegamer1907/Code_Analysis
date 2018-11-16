#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
#include<algorithm>
#include<stack>
#include<math.h>
#include<queue>
#include<vector>
#define ll long long
#define inf   20
#define maxn 200
using namespace std;
int n;
int k;
int a[maxn];
int main(){
//freopen("input2.txt","r",stdin);
cin>>n>>k;
for(int i=0;i<n;i++){
    scanf("%d",a+i);
}
int ans=0;
for(int i=0;i<n;i++){
    if(a[i]>=a[k-1]&&a[i]>0)
    ans+=1;
}
cout<<ans<<endl;
return 0;
}
