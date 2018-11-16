#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i,x,y,j,z,f=0,ff=0,fff=0,ffff=0;
    cin>>s;
    n=s.length();
    for(i=0;i<n-1;i++) {
        if(s[i]=='A' && s[i+1]=='B' && f==0) {
            f=1;
            break;
        }
        else if(s[i]=='B' && s[i+1]=='A' && ff==0){
            ff=1;
            i++;
        }
    }
    for(i=n-1;i>0;i--){
        if(s[i]=='B' && s[i-1]=='A' && fff==0){
            fff=1;
            i--;
        }
        else if(s[i]=='A' && s[i-1]=='B' && ffff==0){
            ffff=1;
            i--;
        }
    }
    if(f && ff || fff && ffff) cout<<"YES";
    else cout<<"NO";
}
