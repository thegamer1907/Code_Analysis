#include<bits/stdc++.h>
using namespace std;

int n, m, k=0;
string x;
set<string> s;

int main(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> x;
        s.insert(x);
    }
    for(int i=1; i<=m; i++){
        cin >> x;
        if(s.find(x)!=s.end()){
            k++;
        }
    }
    n += k%2;
    if(n>m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}