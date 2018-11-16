#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b,k=1;
cin>>n>>a>>b;
a--;
b--;
a/=2;
b/=2;
int c=abs(a-b);
while(a!=b && n>2){
    a/=2;
    b/=2;
    n/=2;
    k++;
}
if(n==2){cout<<"Final!";}
else{cout<<k;}
return 0;
}
