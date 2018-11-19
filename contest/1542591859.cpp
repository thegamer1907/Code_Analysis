#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    string str; int n;
    bool first=false, last=false;
    cin>>str>>n;

    for (int i=0; i<n; i++){
        string s; cin>>s;
        if (s == str){
            cout<<"YES"<<endl;
            return 0;
        }
        if (s[0] == str[1]) first = true;
        if (s[1] == str[0]) last = true;

        if (first && last){
            cout<<"YES"<<endl;
            return 0;
        }
    }   

    cout<<"NO"<<endl;
}