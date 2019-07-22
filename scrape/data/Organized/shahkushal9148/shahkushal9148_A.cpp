#include<iostream>
 #include<string.h>
 #include<algorithm>
 using namespace std;

 int main(){
 long long n,m,k;
 cin>>n>>m>>k;
// cout<<n<<" "<<m<<" "<<k;

long long a[m];

 for(int i = 0; i < m ;++i ){
    cin>>a[i];
 }

long long num = 0, cur = 0;

 if(k == 1)
 {

     cout<<m;
     return 0;
 }


 for(int i = 0 ; i < m; ){
    //Begin with first element and go on for entire page
    long long curi = cur;
   // cout<<curi<<" "<<a[i]<<"\n";
     long long pgindex = (a[i] - curi)/k;
     //cout<<pgindex<<"\n";
    if((a[i] - curi) % k == 0){
         --pgindex;
    }

    //The Page would contain items till index (pgindex + 1)*k
    
    
    while(i < m && (a[i] - curi) <= (pgindex + 1)*k){
        //cout<<a[i]<<"\n";
        ++i;
        ++cur;
    }

    ++num;
 }
 cout<<num;
 return 0;
 }