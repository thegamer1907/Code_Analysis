#include <bits/stdc++.h>
using namespace std;
int n,k,a[112345];
set<string> S;
vector<int> v;

void rmk(string st){
    int t = 0,d = 1;
    for(int i=st.size()-1;i>-1;--i){
        t += d * (st[i]-'0');
        d <<= 1;
    }
    v.push_back(t);
}

int main(){
    cin>>n>>k;
    for(int i=0;i<n;++i){
        string st;
        for(int j=0;j<k;++j){
            int t;
            cin>>t;
            st += (char)(t+'0');
        }
        S.insert(st);
    }
    for(auto i:S){
        rmk(i);
    }
    if(!v[0]){
        cout<<"YES";
        return 0;
    }
    for(int i=0;i<v.size();++i){
        for(int j=i+1;j<v.size();++j){
            if(!(v[i]&v[j])){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}