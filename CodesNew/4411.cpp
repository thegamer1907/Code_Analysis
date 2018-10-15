#include <bits/stdc++.h>
#define li 500005
#define orta (bas+son)/2
using namespace std;
int n;
string str[li];
bool cmp(string a,string b){
    for(int i=0;i<min((int)a.size(),(int)b.size());i++){
        if(a[i]<b[i]) return true;
        if(b[i]<a[i]) return false;
    }
    if((int)a.size()<=(int)b.size()) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>str[i];
    }
    for(int i=n-1;i>=1;i--){
        int bas=0,son=str[i].size();
        while(bas<=son){
            if(cmp(str[i].substr(0,orta),str[i+1])) bas=orta+1;
            else son=orta-1;
        }
        str[i]=str[i].substr(0,son);
    }
    for(int i=1;i<=n;i++) cout<<str[i]<<'\n';
    return 0;
}
