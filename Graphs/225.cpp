#include <iostream>

using namespace std;

char switching (char x) {
    if (x=='B') {
        x='G';
    } else {
        x='B';
    }
    return x;
}
int main() {
    int n,t,h=0,k=0;
    string s;
    cin>>n>>t;
    cin>>s;
    while (h<t) {
        while (k<n) {
            if (s[k]=='B' && s[k+1]=='G') {
                s[k]=switching(s[k]);
                s[k+1]=switching(s[k+1]);
                k=k+1;
            }
            k=k+1;
        }
        k=0;
        h=h+1;
    }
    cout<<s;
    return 0;
}