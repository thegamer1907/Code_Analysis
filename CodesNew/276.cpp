#include<bits/stdc++.h>
using namespace std;
int main(){
   long long i,n,m,c=0,p=0,d=0;
   cin>>n>>m;
   long long a[n];
   for(i=0;i<n;i++){
        cin>>a[i];
   }
   //sort(a,a+n);
   for(i=0;i<n;i++){
        p+=a[i];
        if(p<=m){
            c++;
        }
        if(p>m){
            c--;
            p-=a[d];
            d++;
        }
   }
   cout<<c+d<<endl;
}
