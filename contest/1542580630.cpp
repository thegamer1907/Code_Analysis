#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k,j,i,y,l;bool s[100050][5],b[5]={1,1,1,1,1},is=0,ex[20]={};
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
         l=0;y=0;
        for(j=0;j<k;j++) {cin>>s[i][j];b[j]=(b[j]&&s[i][j]);if(!s[i][j])l++;y*=2;y+=s[i][j];}
        if(l>=k-1) is=1;
        ex[y]=1;
    }
    for(i=0;i<k;i++) if(b[i]==1){cout<<"NO"<<endl;return 0;}
    if(is) {cout<<"YES"<<endl;return 0;}
    if(k<4) {cout<<"NO"<<endl;return 0;}
    for(i=0;i<16;i++)
    {
        if(ex[i]&& ex[i^15]){cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}
