#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,t,a[100000];
cin>>n>>t;
for(int i=1;i<n;i++)
     cin>>a[i];
for(int i=1;i<n;){
    i+=a[i];
    if(i==t){cout<<"YES";return 0;}}
    cout<<"NO";

}