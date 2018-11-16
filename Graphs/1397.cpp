#include"bits/stdc++.h"
#include <cctype>
using namespace std;

int main()
{
    int n,c,d,flag=1;
    cin>>n>>c;
    int a[n],b[n];
    for(int i=1;i<n;i++)
        cin>>a[i];
    b[0]=1;
    b[1]=1+a[1];
    if(b[1]==c){
         return cout<<"YES",0;
    }
    for(int i=2;i<n;i++){
        b[i]=b[i-1]+a[b[i-1]];
        if(b[i]==c){
            return cout<<"YES",0;
        }
        if(b[i] > c){
            return cout << "NO",0;
        }
    }

   return 0;
}


