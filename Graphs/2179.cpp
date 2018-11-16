#include<bits/stdc++.h>
using namespace std;
vector<int> v(100000, -1);
int val(int m, int n){
    if(m==n){
        return 0;
    }
    if(2*m == n){
        return 1;
    }
    if(m-1 == n){
        return 1;
    }
    if(m<=0)
        return 1000000;
    if(m>=80000)
        return 1000000;
    if(v[m]==-1){
        v[m] = 100000;
        v[m] = min(val(m-1, n), val(2*m, n)) + 1;
    }
    return v[m];
}
int main(){
    int m, n;
    cin>>m>>n;
    cout<<val(m, n)<<'\n';
    return 0;
}