#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    cin>>a>>b;
    int s[a];
    for (i=1 ;i<a; i++) cin>>s[i];
    s[a]=1;
    for (i=1 ;i<=a ;i+=s[i]){
        if(i==b) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
