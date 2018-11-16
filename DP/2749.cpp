//lolololololol
#include<bits/stdc++.h>
using namespace std;
int read() {
    char c=getchar(); int x=0,f=1;
    while (c<'0' || c>'9') {
        if (c=='-') f=-1;
        c=getchar();
    }
    while (c>='0' && c<='9') {
        x=x*10+c-'0';
        c=getchar();
    }
    return x*f;
}
int main() {
    int n=read();
    int ans=0;
    ans+=n/100;
    n%=100;
    ans+=n/20;
    n%=20;
    ans+=n/10;
    n%=10;
    ans+=n/5;
    n%=5;
    ans+=n;
    cout<<ans<<endl;
    return 0;
}