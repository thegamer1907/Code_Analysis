#include<bits/stdc++.h>
using namespace std;
main(){
int n,m,g,a[1000]={0},b[1000]={0},dem=0;
cin>>n;
for(int i=0;i<n;i++){cin>>g;a[g]++;}
cin>>m;
for(int i=0;i<m;i++){cin>>g;b[g]++;}
for(int i=1;i<=100;i++){
    int startdem=dem;
while(a[i]>0&&b[i-1]>0){dem++;a[i]--;b[i-1]--;}
while(a[i]>0&&b[i]>0){dem++;a[i]--;b[i]--;}
while(a[i]>0&&b[i+1]>0){dem++;a[i]--;b[i+1]--;}
if(startdem!=dem){i--;}}
cout<<dem;
}