#include<bits/stdc++.h>

using namespace std;
long long n;
long long a;
long long sum;

bool check(long long mid){

if((n-1)*mid>=sum)
    return 1;
return 0;
}


int main(){
cin>>n;
cin>>a;
long long r=a;
sum+=a;
for(int i=1;i<n;i++){

   cin>>a;
   sum+=a;
   r=max(r,a);

}

long long st=r,en=n*r,ans=0,mid=(st+en)/2;

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