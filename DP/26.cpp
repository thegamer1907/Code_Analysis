#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
int n,m;
cin>>n;
int a[n+1];

for(int i=0;i<n;i++)cin>>a[i];
cin>>m;
int b[m+1];

for(int i=0;i<m;i++)cin>>b[i];
int u=0,d=0,count=0;
sort(a,a+n);
sort(b,b+m);
while(u<n&&d<m){
//	cout<<a[u]<<" "<<b[d]<<endl;
  if(abs(a[u]-b[d])<=1)
  {
  	u++;
  	d++;
  	count++;
}
 else if(a[u]>b[d]) d++;
 else u++;

 //cout<<u<<" "<<d<<endl;

}
cout<<count<<endl;

}