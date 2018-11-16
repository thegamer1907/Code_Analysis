#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll t,i,j,k,l,n,m;
    cin>>n>>m;
    int A[10010]={0};
    for(i=n-1;i>=0;--i){
        A[i] = 1+A[i+1];
    }
    for(i=n+1;i<10010;++i){
        if(i%2==0){
            A[i] = 1+A[i/2];
        }else{
            A[i] = 2+A[1+ i/2];
        }
    }
    cout<<A[m];
    return 0;
}
