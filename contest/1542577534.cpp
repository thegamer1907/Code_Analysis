#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define ld long double
#define f first
#define ss second
#define PI acos(-1)
#define CS ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
map<string ,bool>mop;
string cc="";
bool ch(string s){
    if(mop[s])return 1;
    if(s==cc)return 0;
    bool ret=0;
    for(int i=0;i<s.size();i++){
        string ns=s;
        if(s[i]=='1'){ns[i]='0';
        ret|=ch(ns);}
    }
    return ret;
}
int main(){
    CS;
    int n,k;cin>>n>>k;
    for(int i=0;i<k;i++)cc+='0';
    while(n--){
        string a="",b="";
        for(int i=0;i<k;i++){
            char c;cin>>c;
            if(c=='1')a+='1',b+='0';
            else a+='0',b+='1';
        }
        if(ch(b)||a==cc)return cout<<"YES" ,0;
        mop[a]=1;
    }
    cout<<"NO";
    return 0;
}
