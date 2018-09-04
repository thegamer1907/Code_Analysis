
    #include <bits/stdc++.h>
    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <chrono>
    #include <complex>
    #define endl "\n"
    #define ll long long int
    #define vi vector<int>
    #define vll vector<ll>
    #define vvi vector < vi >
    #define pii pair<int,int>
    #define pll pair<long long, long long>
    #define mod 1000000007
    #define inf 1000000000000000001;
    #define all(c) c.begin(),c.end()
    #define mp(x,y) make_pair(x,y)
    #define mem(a,val) memset(a,val,sizeof(a))
    #define eb emplace_back
    #define fi first
    #define se second
#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define pb(x) push_back(x)
#define LET(x, a)  __typeof(a) x(a)
#define foreach(it, v) for(LET(it, v.begin()); it != v.end(); it++)

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define tr(...) cout<<__FUNCTION__<<' '<<__LINE__<<" = ";trace(#__VA_ARGS__, __VA_ARGS__)

    using namespace std;

template<typename S, typename T>
ostream& operator<<(ostream& out,pair<S,T> const& p){out<<'('<<p.fi<<", "<<p.se<<')';return out;}

template<typename T>
ostream& operator<<(ostream& out,vector<T> const& v){
ll l=v.size();for(ll i=0;i<l-1;i++)out<<v[i]<<' ';if(l>0)out<<v[l-1];return out;}

template<typename T>
void trace(const char* name, T&& arg1){cout<<name<<" : "<<arg1<<endl;}

template<typename T, typename... Args>
void trace(const char* names, T&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma-names)<<" : "<<arg1<<" | ";trace(comma+1,args...);}
    
   ll hash1[1000001]; 
   ll po[1000001];
   string s;
   ll si;
   ll p = 31;
    ll m = 1e9+ 9;
   ll sub_hash(ll i, ll j){
    ll thash = (hash1[i]+m - ((hash1[j+1])*po[j+1-i])%m)%m;
    return thash;
   }
   bool check(ll m){
    ll thash = sub_hash(0,m-1);
    for(ll i = 1 ; i  <= si-m-1 ; i++){
        if(sub_hash(i,i+m-1) == thash)
            return true;
        
    }
    return false;
   }
    int main()
    {_

        // ll n;
        
            // string s;
            cin >> s;
            si = s.size();
            hash1[si] = 0;
            for(ll i = 0 ; i < si ; i++){
                if(i == 0)
                    po[i] = 1;
                else
                    po[i] = (po[i-1]*p)%m;
            }
            for(ll i = si-1 ; i >= 0 ; i--){
                if(i == si-1){
                    hash1[i] = s[i] - 'a' + 1;
                }
                else{
                    hash1[i] = (s[i] - 'a' + 1 + hash1[i+1]*p)%m;
                }
            }
            vll v;
            for(ll l = 1 ; l <= si ; l++){
                ll i = l-1;
                ll j = si-l;
                if(sub_hash(0,i) == hash1[j])
                    v.push_back(l);
            }
            if(v.size() == 0){
                cout << "Just a legend"; return 0;
            }
            if(check(v[0]) == false){

            // for(auto e : v)
            //     cout << "debug " << e << endl;
                cout << "Just a legend"; return 0;

            }
            ll l = 0;
            ll r = v.size()-1;
            while(l+1 < r){
                ll m = (l+r)/2;
                if(check(v[m]))
                    l = m;
                else
                    r = m;
            }
            cout << s.substr(0,v[l]);


        
        return 0;
    }
// http://codeforces.com/problemset/tags/dp/page/3?order=BY_SOLVED_DESC