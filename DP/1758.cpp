#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
char s[maxn];
int a[maxn],b[maxn];
int main() {
    cin>>s;
    int ia=0,ib=0;
    for(int i=0; i<strlen(s); i++) {
        if((s[i]=='B')&&(s[i-1]=='A')) {
            a[ia]=i;
            ia++;
        }

        if(s[i]=='A'&&s[i-1]=='B') {
            b[ib]=i;
            ib++;
        }

    }
    for(int i=0; i<ia; i++) {
        for(int j=0; j<ib; j++) {
            if(abs(a[i]-b[j])>1) {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";

}
/*
if((s[i]=='B')&&(s[i-1]=='A')&&(s[i-2]!='B'))
            fa=1;
        if(s[i]=='A'&&s[i-1]=='B'&&s[i-2]!='A')
            fb=1;
*/
