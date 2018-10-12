#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
     
     
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   int n,m;
   cin>>n;
   cin>>m;
   int maxi=0;
   int a[n];
   for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
   }
   int p=m;
   sort(a , a+n);
   for(int i=0;i<n;i++){
        int diff=0;
        if(a[i] < maxi){
             while(a[i]!=maxi){
                  a[i]+=1;
                  p--;
             }
        }
   }
   if(p>0){
        if(p%n==0){
             p=p/n;
        }else{
             p=(p/n) + 1;
        }
        cout<<(maxi + p)<<" "<<(m+maxi);
   }else{
        cout<<(maxi)<<" "<<(m+maxi);
   }
   
   
   return 0;
}