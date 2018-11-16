#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    vector<int> a(n),b(k);
    for(int i = 0 ; i < n ; i ++){
        cin>>a[i];
    }
    for(int j = 0 ; j < k ; j ++){
        cin>>b[j];
    }
    sort(b.begin(),b.end());
    for(int i = 1 ; i < k ; i ++){
        if(b[i]!=b[i-1]){
            cout<<"Yes";
            return 0;
        }
    }
    for(int j = 1 ; j < n ; j ++){
        int pn=a[j-1];
        if(!pn)pn=b[0];
        int tn=a[j];
        if(!tn)tn=b[0];
        if(tn<pn){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}
