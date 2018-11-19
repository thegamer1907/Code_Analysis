#include<bits/stdc++.h>
using namespace std;

int main(int argc,char const *argv[]) {
    string a;
    cin>>a;
    int n;
    cin>>n;
    set<char> f,s;
    for(int i=1;i<=n;i++) {
        string str;
        cin>>str;
        string k=str;
        reverse(k.begin(),k.end());
        if(str==a) {
            cout<<"YES"<<endl; return 0;
        }
        if(k==a) {
            cout<<"YES"<<endl; return 0;
        }
        s.insert(str[1]); f.insert(str[0]);
    }
    if((s.find(a[0])!=s.end())&&(f.find(a[1])!=f.end())) {
        cout<<"YES"<<endl; return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
