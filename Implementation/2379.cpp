#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   k=240-k;
   int temp=k;
   for(int i=1;i<=n;i++){
    temp-=5*i;
    if(temp<0){
        cout<<i-1;
        return 0;
    }
   }
   cout<<n;
    return 0;
}
