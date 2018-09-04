///////////////////////////////////////////////////////////////
//__________________________________________________________//
// \\\\\\\\\\\---------------------------------------------//
//          //                 __    __                   // 
//         //     \\\\\\\\    |. \  / .|    /////////    //
//    ///////       ||   \\   |.|\\//|.|   //           //
//    /  // /       ||    \\  |.| \/ |.|  //   /////// //
//    / //  /       ||    //  |.|    |.|  \\     \\    \\
//    ///////      ////////   |.|    |.|   \\\\\\\\\\   \\
//    //                                                 \\
// \\\\\\\\\\\\-------------------------------------------\\
// ________________________________________________________\\
/////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX 1000005
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define vp vector<pii >
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define lb(v,x) lower_bound(all(v),x)
#define ub(v,x) upper_bound(all(v),x)
#define sz(x) x.size()
#define F first
#define S second
#define FOR(i,a,b) for(ll i=a;i<b;++i)
#define ROF(i,a,b) for(ll i=a;i>=b;--i)
typedef long long ll;
using namespace std;

ll modexp(ll base,ll exp){
    if(exp==1)return base;
    else if(exp==0)return 1;
    else{
        if(exp%2 == 0){
            ll base1=pow(modexp(base, exp/2),2);
            if(base1 >= MOD)
            return base1%MOD;
            else return base1;
        }
        else{
            ll ans = (base *  pow(modexp(base,(exp-1)/2),2));
            if(ans >= MOD)return ans%MOD;
            else return ans;
        }
    }
}

ll gcd(ll a,ll b){
    if(!a)return b;
    return gcd(b%a,a);
}

int a[MAX];

void lps(string s){
    int l=0;
    a[0]=0;
    int i=1;
    while(i<sz(s)){
        if(s[i]==s[l]){
            l++;
            a[i]=l;
            i++;
        }
        else{
            if(l>0){
                l=a[l-1];
            }
            else{
                a[i]=0;
                i++;
            }
        }
    }
}

int main(){
    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s;
    cin>>s;
    int n=sz(s);
    lps(s);
    //FOR(i,0,n)cout<<a[i]<<" ";
    //cout<<'\n';
    if(a[n-1]==0){
        cout<<"Just a legend";
        return 0;
    }
    else{
        FOR(i,1,n-1){
            if(a[i]==a[n-1]){
                //cout<<"1\n";
                FOR(j,i-a[n-1]+1,i+1)cout<<s[j];
                return 0;
            }
        }
        FOR(i,1,n-1){
            if(a[i]==a[a[n-1]-1] && a[i]){
                //cout<<"2\n";
                FOR(j,i-a[a[n-1]-1]+1,i+1)cout<<s[j];
                return 0;
            }
        }
    }
    cout<<"Just a legend";
    return 0;
}