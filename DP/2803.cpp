#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0;cin>>n;
    vector<int> v;
    while(n>0){
        v.push_back(n%10);
        m=max(v[v.size()-1],m);
        n/=10;
    }
    vector<int> num(m);
    for(int i = 0,t=1 ; i < v.size() ; i ++, t*=10){
        for(int j = 0 ; j < v[i] ; j ++){
            num[j]+=t;
        }
    }
    cout<<m<<endl;
    for(int i = 0 ; i < m ; i ++){
        cout<<num[i]<<" ";
    }
}
