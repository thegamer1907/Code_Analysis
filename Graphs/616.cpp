#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    for(int j=1; j<=t; j++){
        for(int i=0; i<n-1; i++)
        if(s[i]==66 && s[i+1]==71) {swap(s[i],s[i+1]); i++;}
    }
    cout<<s;
    return 0;
}
