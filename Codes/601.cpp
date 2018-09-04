#include <bits/stdc++.h>
using namespace std;
int k;

bool cnt(int n){
    int t = 0;
    while(n){
        t += n%10;
        n /= 10;
    }
    return t==10;
}

int main(){
    cin>>k;
    for(int i=19,j=0;i<1e8;++i){
        j += cnt(i);
        if(k==j){
            cout<<i;
            return 0;
        }
    }
}