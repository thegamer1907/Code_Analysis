#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int n,m;
    string s1[1000],s2[1000];
    cin>>n>>m;
    for (int i=0;i<n;i++) cin>>s1[i];
    for (int i=0;i<m;i++) cin>>s2[i];
    int ans=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            if (s1[i]==s2[j]) ans++;
    n-=ans/2;
    m-=ans/2;
    if (ans % 2) m--;
    if (n>m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
