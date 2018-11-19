#include<bits/stdc++.h>
using namespace std;
char c1,c2,a,b;
int n;
int main(){
    set<char> s1,s2;
    cin>>a>>b>>n;
    while(n--){
        cin>>c1>>c2;
        if(c1==a && c2==b){
            cout<<"YES";
            return 0;
        }
        s1.insert(c1);
        s2.insert(c2);
    }
    if(s1.count(b) && s2.count(a)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
