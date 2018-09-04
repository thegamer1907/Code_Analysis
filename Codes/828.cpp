#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,o=1;
    cin>>n>>k;
    while(1){
        if(k==(o<<( n-1))){
            cout<<n;
            return 0;
        }else{
            n--;
            if(k>(o<<(n)))k-=(o<<(n));
        }
    }
}

