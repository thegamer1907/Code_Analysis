#include<bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define all(a) a.begin(),a.end()
#define int long long
using namespace std;

const int N=1e6+7;

int h[N];
int p[N];
string s;

const int mod=1e9+7;

bool func(int pos,int pos1,int k)
{
    int hh=h[pos+k-1]-h[pos-1];
    int hh1=h[pos1+k-1]-h[pos1-1];
    hh+=mod;
    hh1+=mod;
    hh%=mod;
    hh1%=mod;
    if (pos1>pos)hh*=p[pos1-pos];
    if (pos>pos1)hh1*=p[pos-pos1];
    hh%=mod;
    hh1%=mod;
    if (hh==hh1)return true;
    else return false;
}

main ()
{
    cin>>s;
    if (s.size()<3){
        cout<<"Just a legend"<<endl;
        exit(0);
    }
    string ans="";
    p[0]=1;
    for (int i=1;i<=N-3;++i){
        p[i]=(p[i-1]*31)%mod;
    }
    for (int i=0;i<s.size();++i){
        if (i)h[i]=h[i-1];
        h[i]+=((s[i]-'a'+1)*p[i])%mod;
    }
    vector<int>b;
    for (int i=1;i<=s.size()-2;++i){
        if (func(0,s.size()-i,i))b.pb(i);
    }
//    for (int j=0;j<b.size();++j){
//        cout<<b[j]<<" ";
//    }
//    cout<<endl;
    int l=0;
    int r=b.size()-1;
    if (b.size()){
        while(l<r-1){
            int m=(l+r)/2;
            int k=b[m];
            bool c=false;
            for (int j=1;j<=s.size()-k-1;++j){
                if (func(0,j,k)){
                    c=true;
                    break;
                }
            }
            if (c)l=m;
            else r=m;
        }
    }
    int mx=0;
    if (b.size()){
        int k=b[r];
        bool c=false;
        for (int j=1;j<=s.size()-k-1;++j){
            if (func(0,j,k)){
                c=true;
                break;
            }
        }
        if (c)mx=k;
        else {
            k=b[l];
            c=false;
            for (int j=1;j<=s.size()-k-1;++j){
                if (func(0,j,k)){
                    c=true;
                    break;
                }
            }
            if (c)mx=k;
        }
    }
    if (mx){
        for (int j=0;j<mx;++j){
            cout<<s[j];
        }
    }
    else {
        cout<<"Just a legend"<<endl;
    }

}
