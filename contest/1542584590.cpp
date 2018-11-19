
#include<bits/stdc++.h>

using namespace std;

const int N = 111;
string s;
string a[N];
int n;
#define fuck {cout<<"YES\n"; return 0;}
int main(){
    cin>>s;
    cin>>n;
    for(int i = 0 ; i < n ; i ++){
        cin>>a[i];
    }

    for(int  i = 0; i  < n ; i ++){
        if(a[i] == s){
            fuck
        }
        for(int j = 0 ; j < n ; j ++) {
            if(a[i][1] == s[0] && a[j][0] == s[1])
                fuck
        }


    }

    cout<<"NO\n";
    return 0;
}
