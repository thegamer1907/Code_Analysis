#include <bits/stdc++.h>

using namespace std;

bool pr[30],nx[30];
string a,b;

int main(){
    int n;
    bool fd=false;
    cin>>a>>n;
    for(int i=1;i<=n;i++){
        cin>>b;
        if(a==b||(a[0]==b[1]&&b[0]==a[1]))
            fd=true;
        pr[b[0]-'a']=nx[b[1]-'a']=true;
    }
    puts(fd||(nx[a[0]-'a']&&pr[a[1]-'a'])?"YES":"NO");
    return 0;
}