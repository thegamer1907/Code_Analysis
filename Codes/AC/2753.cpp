#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
const ll P = 29;
const int N = 1e6+5;

string s;
int n;
ll hsh[N],inv[N];
vector<int>L;

ll bpow(ll a,ll b){
    ll ans=1LL;
    while(b){
        if(b&1)ans=ans*a;
        a*=a;
        if(ans>=MOD)ans%=MOD;
        if(a>=MOD)a%=MOD;
        b>>=1LL;
    }
    return ans;
}

ll GetHash(int fi,int se){
    if(!fi)return hsh[se];
    return (hsh[se]-hsh[fi-1]+MOD)%MOD *inv[fi]%MOD;
}

void print(int i,int j){
    for(int k=i;k<=j;k++)cout<<s[k];
}

bool solve(int mid,ll h1){
    for(int i=1;i+mid-1<n-1;i++){
        if(GetHash(i,i+mid-1)==h1){
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    cin>>s;
    n=s.length();
    ll p=1LL;

    for(int i=1;i<n;i++){
        p*=P;
        if(p>=MOD)p%=MOD;
    }

    inv[n-1]=bpow(p,MOD-2);
    for(int i=n-2;i>=0;i--){
        inv[i]=inv[i+1]*P%MOD;
        if(inv[i]>=MOD)inv[i]%=MOD;
    }

    p=P;
    hsh[0]=s[0]-'a'+1;
    for(int i=1;i<n;i++){
        hsh[i]=(hsh[i-1]+p*(s[i]-'a'+1))%MOD;
        p*=P; if(p>=MOD)p%=MOD;
    }


    ll h1,h2;
    for(int len=0;len<n-1;len++){
        h1=GetHash(0,len);
        h2=GetHash(n-1-len,n-1);
        if(h1==h2){
            L.push_back(len+1);
        }
    }

    if(L.size()==0){
        cout<<"Just a legend";
        return 0;
    }

    int le=0;
    int ri=L.size()-1;
    int ans=-1;

    while(le<=ri){
        int mid=(le+ri)>>1;
        if(solve(L[mid],GetHash(0,L[mid]-1))){
            ans=L[mid];
            le=mid+1;
        }else{
            ri=mid-1;
        }
    }
    if(ans!=-1){
        for(int i=0;i<ans;i++)cout<<s[i];
    }
    else cout<<"Just a legend";

    return 0;
}
