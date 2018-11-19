#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    string s,t;
    cin>>s;
    int n, a12 = 0, a21  = 0;
    cin>>n;
    bool ans = false;
    while(n--){
        cin>>t;
        if(s == t)ans = true;
        if(s[0] == t[1])a12++;
        if(s[1] == t[0])a21++;
    }
    if(a12 > 0 && a21 > 0)ans = true;
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
