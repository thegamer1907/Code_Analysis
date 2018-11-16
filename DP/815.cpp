
#include<bits/stdc++.h>
using namespace std;

int main(){
int  n,i,j,k;
cin>>n;
int a[n+1];
int temp=0;

for(i=0;i<n;i++) {
        cin>>a[i];

        if(!a[i]) a[i]=1;
        else {
            temp++;
            a[i]=-1;
        }
}

int ans=0,sum=0,flag=-1;
for(i=0;i<n;i++){
sum+=a[i];
if(sum<0){
    sum=0;
}
else{
    ans=max(sum,ans);
    flag=0;
}
}
cout<<ans+temp+flag<<endl;


}
