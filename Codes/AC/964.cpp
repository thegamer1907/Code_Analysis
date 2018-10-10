#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,rez=1;cin>>n>>k;
    string s;
    cin>>s;
    vector<int> a,b;
    a.push_back(-1);
    b.push_back(-1);
    for(int i = 0 ; i < n ; i ++){
        if(s[i]=='a')a.push_back(i);
        else b.push_back(i);
    }
    a.push_back(n);
    b.push_back(n);
    if(a.size()-2<=k){
        cout<<n;
        return 0;
    }
    if(b.size()-2<=k){
        cout<<n;
        return 0;
    }
    for(int l = 1, r = k ; r < a.size()-1 ; l++,r++){
        rez=max(rez,a[r+1]-a[l-1]-1);
    }
    for(int l = 1, r = k ; r < b.size()-1 ; l++,r++){
        rez=max(rez,b[r+1]-b[l-1]-1);
    }
    cout<<rez;
}
