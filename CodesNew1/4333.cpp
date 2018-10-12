///////////////////////////////////////////////////////////////
//__________________________________________________________//
// \\\\\\\\\\\---------------------------------------------//
//          //                 __    __                   // 
//         //     \\\\\\\\    |. \  / .|    /////////    //
//     //////       ||   \\   |.|\\//|.|   //           //
//    /  // /       ||    \\  |.| \/ |.|  //   /////// //
//    / //  /       ||    //  |.|    |.|  \\     \\    \\
//    //////       ////////   |.|    |.|   \\\\\\\\\\   \\
//    //                                                 \\
// \\\\\\\\\\\\-------------------------------------------\\
// ________________________________________________________\\
/////////////////////////////////////////////////////////////
 
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX 100000005
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
#define sz(x) (ll)x.size()
#define F first
#define S second
#define FOR(i,a,b) for(ll i=a;i<b;++i)
#define ROF(i,a,b) for(ll i=a;i>=b;--i)
#define trace(x) cerr<<#x<<": "<<x<<'\n';
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

long long int phi(long long x)
 {
   long long int ret = 1,i,pow;
   for (i = 2; x != 1; i++) 
   {
     pow = 1;
     if(i>sqrt(x))break;
     while (!(x%i)) 
     {
       x /= i;
       pow *= i;
     }
     ret *= (pow - (pow/i));
    }
    if(x!=1)ret*=(x-1);
    return ret;
}

int lps[1000005];

void computeLPS(string pat, int M, int *lps)
{
    int len = 0;
 
    lps[0] = 0; 
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}


string s[500005];

int main(){
    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    FOR(i,0,n){
        cin>>s[i];
    }
    ROF(i,n-1,1){
        if(s[i-1]>s[i]){
            FOR(j,1,sz(s[i-1])){
                if(s[i-1][j]>s[i][j]){
                    s[i-1]=s[i-1].substr(0,j);
                }
            }
        }
    }
    FOR(i,0,n){
        cout<<s[i]<<'\n';
    }
    return 0;
}