#include<bits/stdc++.h>
#define int long long
using namespace std;
char a[101],b[101];
main()
{
    char s1,s2;
    cin>>s1>>s2;
    int n;
    cin>>n;
    bool k=false,p=false,l=false;;
    for(int i=1; i<=n; i++){
        cin>>a[i]>>b[i];
        if(a[i]==s1 && b[i]==s2) l=true;
        if(a[i]==s2) k=true;
        if(b[i]==s1) p=true;
    }
    if((k&&p) || l) cout<<"YES";
    else cout<<"NO";
}
