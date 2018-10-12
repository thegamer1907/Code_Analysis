#include<bits/stdc++.h>

using namespace std;
#define N 100000
int n;



int main (){


unsigned long long sum=0;




cin>>n;
long long x,max1=0;
for(int i=0;i<n;++i){
    cin>>x;
    sum+=x;
    max1=max(max1,x);
}


long long en=max1*n , st=max1 , md=(en+st)/2, ans=0;


while(en>=st){

    if( (n-1)*md >= sum ){
     ans=md;
     en=md-1;
    }
    else
      st=md+1;

    md=(en+st)/2;


}


cout<<ans;


return 0;
}
