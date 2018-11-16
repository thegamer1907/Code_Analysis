#include<bits/stdc++.h>
using namespace std;
main(){ 
 string a;
 int n,s[1000],b,c,i,k=0,m,j;
 cin>>a;
 for(i=5; i<a.size(); i++){
  if(a[i]==a[i-1] && a[i]==a[i-2] && a[i]==a[i-3] && a[i]==a[i-4] && a[i]==a[i-5] && a[i]==a[i-6]) {
   cout<<"YES";
   exit(0);
  }
 }
cout<<"NO";


}