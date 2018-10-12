#include<iostream>


using namespace std;

int bs(long long  sum[],int l1,int r1,long long  key){
int l=l1,r=r1;
int mid;
while(r-l>1){
mid=l+(r-l)/2;
if(sum[r1]-sum[mid]>=key){l=mid;}
else{r=mid;}
}

if(sum[r1]-sum[r]>=key){return r;}
else if(sum[r1]-sum[l]>=key){return l;}
else if(l==0){
return -1;

}
}



int main(){
int n,q;
cin>>n>>q;
long long a[n],k[q];
long long sum[n];
for(int i=0;i<n;i++){long long x;cin>>x;
a[n-1-i]=x;

}

for(int i=0;i<n;i++){

if(i==0){sum[i]=a[i];}
else{sum[i]=sum[i-1]+a[i];}
}

for(int i=0;i<q;i++){cin>>k[i];}

int ans[q];
int max=n-1;
long long  car=0;
for(int i=0;i<q;i++){
int next=bs(sum,0,max,k[i]+car);
if(next==-1){
if(sum[max]>k[i]+car){max=0;car=a[0]-sum[max]+k[i]+car;ans[i]=max+1;continue;}
else{
max=n-1;ans[i]=n;car=0;continue;
}

}
if(sum[max]-sum[next]>k[i]+car){car=k[i]+car-sum[max]+sum[next+1];max=next+1;ans[i]=max+1;continue;}
if(sum[max]-sum[next]==k[i]+car){car=0;max=next;ans[i]=max+1;continue;}
}

for(int i=0;i<q;i++){cout<<ans[i]<<endl;}

return 0;
}
