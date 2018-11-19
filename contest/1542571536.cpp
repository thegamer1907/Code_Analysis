
#include <bits/stdc++.h>

using namespace std;


#define ll long long
#define pii pair<int,int>
#define MAX


int main(){

    string pas;
    int n;
    cin>>pas>>n;
    set<char> b,e;
    string aux;
    for(int i=0;i<n;i++){
        cin>>aux;
        if(aux==pas){
            cout<<"YES\n";
            return 0;
        }
        b.insert(aux[0]);
        e.insert(aux[1]);
    }
    if(b.find(pas[1])!=b.end() && e.find(pas[0])!=e.end()){
        cout<<"YES\n";
    }
    else cout<<"NO\n";


    return 0;
}