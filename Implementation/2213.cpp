#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main(){

    long int k,n,w,price_required,to_borrow;
    cin>>k>>n>>w;
    price_required=k*(w*(w+1))/2;
    to_borrow=price_required-n;
    if(to_borrow>0)
    cout<<to_borrow;
    else
        cout<<0;
}
