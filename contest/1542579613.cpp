#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define preturn(X) cout<<X<<endl; return 0
typedef long long ll;
const ll MOD = 1e9+7;
//cout.setf(ios::fixed); cout.precision(18)

int n;
string s[300];
bool cnt[300][13][4100];
string pref[300],suf[300]; 

string extract(string x){
    if(x.size()>12){
        return x.substr(0,12);
    }
    return x;
}

string extract1(string x){
    if(x.size()>12){
        return x.substr(x.size()-12,12);
    }
    return x;
}

void compute(int j,int k){
    pref[j] = extract(s[j]);
    suf[j] = extract1(s[j]);
    if(s[j].size()<k){
        return;
    }
    int num = 0;
    rep(i,0,k){
        num*=2;
        num+=(s[j][i]-'0');
    }
    num-=(s[j][k-1]-'0');
    rep(i,k-1,s[j].size()){
        num+=(s[j][i]-'0');
        cnt[j][k][num]=1;
        num-=((s[j][i-k+1]-'0')<<(k-1));
        num*=2;
    }
}

int query(int ind,int x,int y){
    int ans = 0;
    s[ind] = suf[x]+pref[y];
    rep(k,1,13){
        rep(j,0,(1<<k)){
            cnt[ind][k][j] = cnt[x][k][j]+cnt[y][k][j];
        }
        compute(ind,k);
        bool valid = 1;
        rep(j,0,(1<<k)){
            if(cnt[ind][k][j]==0){
                valid = 0;
            }
        }
        if(valid){
            ans = k;
        }
    }
    pref[ind] = pref[x];
    if(pref[x].size()<12){
        pref[ind] = extract(pref[x]+pref[y]);
    }
    suf[ind] = suf[y];
    if(suf[y].size()<12){
        suf[ind] = extract1(suf[x]+suf[y]);
    }
    return ans;
}

int main(){
    cin.tie(0);ios_base::sync_with_stdio(0);
    cin>>n;
    rep(i,1,n+1){
        cin>>s[i];
        rep(j,1,13){
            compute(i,j);
        }
    }          
    int m;
    cin>>m;
    int a,b;
    rep(i,1,m+1){
        cin>>a>>b;
        cout<<query(n+i,a,b)<<'\n';
    }
    /*rep(i,0,4){
        cout<<cnt[7][2][i]<<" ";
    }*/
    /*cout<<pref[5]<<endl;
    cout<<suf[5]<<endl;*/
}