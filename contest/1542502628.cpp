#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+25;
long long n;
long long t[maxn];
char c1[maxn],c2[maxn];
char c[100];
int main() {
    cin>>c;
    cin>>n;
    int p=0;
    for(int i=0;i<n;i++){
        char s[100];
        cin>>s;
        if(s[0]==c[0]&&s[1]==c[1])p=1;
        c1[s[0]]=1;
        c2[s[1]]=1;
    }
    if(c2[c[0]]==1&&c1[c[1]]==1)p=1;
    puts(p?"YES":"NO");
    return 0;
}

