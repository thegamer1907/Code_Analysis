#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=1e6+5;

vector <int> zFun(string &s){
    int n=s.size();
    vector <int> z(n);
    int x=0,y=0;
    for(int i=1;i<n;i++){
        z[i]=max(0,min(z[i-x],y-i+1));
        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
            x=i,y=i+z[i],z[i]++;
    }
    return z;
}

void solve(string &s){
    vector <int> z=zFun(s);
    int n=s.size();
    int maxi=0;
    for(int i=1;i<n;i++){
        if(z[i]==n-i && maxi>=z[i]) {cout << s.substr(0,z[i]); return;}
        maxi=max(maxi,z[i]);
    }
    cout << "Just a legend";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    solve(s);
}
