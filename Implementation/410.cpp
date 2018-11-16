#include <iostream>

using namespace std;

int main()

{
int n,k;
int thenum=0;
cin>>n>>k;
int z[n];

if ((1<=k)&&(k<=n)&&(n<=50)){
        k=k-1;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if((a<=100)&&(a>=0)){z[i]=a;}
    }

   for(int i=0;i<n;i++){
    if((z[k]<=z[i])&&(z[i]!=0)){thenum=thenum+1;}
       }

   }

   cout<<thenum;
return 0;
}






