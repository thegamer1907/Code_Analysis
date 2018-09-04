#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int> v(n);
    for(int i = 0,a ; i < n ; i ++){
        cin>>a;
        if(i)v[i]=v[i-1]+a;
        else v[i]=a;
    }
    cin>>m;
    for(int i = 0,a ; i < m ; i ++){
        cin>>a;
        int p=0;
        for(int j = (1<<17) ; j>0 ; j/=2){
            if(p+j>=n)continue;
            if(v[p+j]<=a)p+=j;
        }
        if(v[p]>=a)cout<<p+1<<endl;
        else cout<<p+2<<endl;
    }
}
