#include<bits/stdc++.h>

using namespace std;
int n,m;  int a[101];int sum;
bool checkof(int mid){
    sum=0;
    for(int i=0;i<n;i++)
        sum=sum+(mid-a[i]);
if(m<=sum)
    return 1;
return 0;
}

int main(){
cin>>n>>m;


  cin>>a[0];
  int r=a[0];

for(int i=1;i<n;i++){
    cin>>a[i];
    r=max(r,a[i]);
}

int st=r,en=r+m,ans=0,mid=(st+en)/2;
while(en>=st){
    if(checkof(mid)){
        ans=mid;
        en=mid-1;
    }
    else
       st=mid+1;

    mid=(st+en)/2;

}
cout<<ans<<" "<<r+m;
return 0;}
