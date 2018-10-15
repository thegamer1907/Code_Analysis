#include<bits/stdc++.h>

using namespace std;
long long n;
long long a;
unsigned long long sum=0;

bool check(long long mid){

if((n-1)*mid>=sum)
    return 1;
return 0;
}

int main(){
cin>>n;
long long r=0;
for(int i=0;i<n;i++){
   cin>>a;
   sum+=a;
   r=max(r,a);

}

long long st=r,en=n*r,mid=(st+en)/2,ans=0;

while(en>=st){
    if(check(mid)){
        ans=mid;
        en=mid-1;
    }
    else
        st=mid+1;
        mid=(en+st)/2;
}

cout<<ans;

return 0;}
