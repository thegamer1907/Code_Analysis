#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n,m,c=0;cin>>n>>m;
    vector<string> v(n),g(m);
    for(int i = 0 ; i < n ; i ++){
        cin>>v[i];
    }for(int j = 0 ; j < m ; j ++){
        cin>>g[j];
        for(int i = 0 ; i < n ; i ++){
            if(v[i]==g[j]){
                c++;
                break;
            }
        }
    }
    int t=c%2;
    n-=c;m-=c;
    if(n+t>m){
        cout<<"YES";
    }else cout<<"NO";
}
