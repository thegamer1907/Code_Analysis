#include<bits/stdc++.h>
using namespace std;
main(){
    int dem0=0,dem1=0,max0=-1,a[100000],n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){dem1++;
    if(dem0>0)dem0--;}
    else {dem0++;if(dem0>max0)max0=dem0;}
}
cout<<dem1+max0;
}