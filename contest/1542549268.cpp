#include<cmath>
#include<iomanip>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,part;
    int n;
    bool S=0,E=0;
    cin>>s>>n;
    while(n>0){
            cin>>part;
        if(part[0]==s[1]){
            S=1;
        }
        if(part[1]==s[0]){
            E=1;
        }
        if(part==s){
            S=1;E=1;
        }
        n--;
    }
    if(S && E){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
