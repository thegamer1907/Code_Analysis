#include<bits/stdc++.h>
using namespace std;
int main()
{    int i,n,t,j;
    cin>>n>>t;
    char a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        }for(i=0;i<t;i++){
    for(j=0;j<n-1;j++){
            if(a[j]=='B'&&a[j+1]=='G'){
            swap(a[j],a[j+1]);j++;}}}for(i=0;i<n;i++){cout<<a[i];}cout<<endl;
    return 0;}

