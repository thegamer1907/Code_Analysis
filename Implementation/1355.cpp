#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    

    ll n, t, i, cB = 0, cG = 0, j;
    cin>>n>>t;
    string s;
    cin>>s;
    for(i = 0; i < t; i += 1) {
        for(j = 0; j < n - 1; j += 1) {
            if(s[j] == 'B' && s[j + 1] == 'G') {
                s[j + 1] = 'B';
                s[j] = 'G';
                j += 1;
            }
        }
    }
    cout<<s;
    return 0;
}