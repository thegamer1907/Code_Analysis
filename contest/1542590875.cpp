#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string pass;
    while(cin>> pass >> n){
        vector <string> s;
        bool flag=false;
        for(int a=0;a<n;a++){
            string st;
            cin>> st;
            s.push_back(st);
            if(st==pass) flag=true;
        }
        if(flag){
            cout<< "YES" <<endl;
            continue;
        }
        bool f1=false,f2=false;
        for(int a=0;a<n;a++){
            if(s[a][0]==pass[1]) f2=true;
            if(s[a][1]==pass[0]) f1=true;
        }
        if(f1 && f2) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
    }
    return 0;
}