#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[3*100000];
int main(){
   ll n,t;
   scanf("%I64d %I64d",&n,&t);
   for(int i=1;i<n;i++){
    scanf("%I64d",&a[i]);
   }
   ll i=1;
   while(i<n){
    i=i+a[i];
    if(i==t){
        printf("YES");
        return 0;
    }
   }
   printf("NO");
   return 0;
}
