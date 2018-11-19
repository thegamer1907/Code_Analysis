// sandeep_007  
 
#include <bits/stdc++.h>
 
using namespace std; 
 
#define PI acos(-1)
#define mod 1000000007
#define ll long long
#define nitro std::ios_base::sync_with_stdio (false); cin.tie(NULL)
#define pb push_back
#define mp make_pair
#define vi vector < int >
#define mod 1000000007

bool sortbysec(const pair<int,int> &A,
              const pair<int,int> &b){
    return (A.second < b.second);
}
 
inline int mx(int A,int b){
    if(A > b) return A;
    else return b;      
}

int power(int x,int y,int p){

    int res = 1;   
    x = x % p;    
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p; 
    }
    return res;
}

int gcd(int A,int b){if(b==0) return A; else return gcd(b,A%b);}

int bruteForce(string s){
    for(int i=1;i<=10;i++){
        for(int j=0;j<(1<<i);j++){
            string a = "";
            for(int k=0;k<=i-1;k++){
                (1<<k)&j ? a+="1":a+="0";
            }
            if(s.find(a) == -1)
                return i-1;
        }
    }
}

int main () {
    nitro;
    #ifdef DBG
        freopen("in","r",stdin);
    #endif

    int n; cin >> n;
    vector < string > vec;
    int ans[1000000] = {0};
    for(int i=0;i<n;i++){
        string s; cin >> s;
        vec.pb(s);
    }

    vector<string> pos;
    int i = 0;

    int q; cin >> q;
    for(int i=0;i<q;i++){
        int l,r; cin >> l >> r;
        string newString = vec[l-1] + vec[r-1];
        vec.pb(newString);
        int n = vec.size()-1; 
        if(vec[n].length() > 1000)
            vec[n] = vec[n].substr(0,500) + vec[n].substr(vec[n].size()-500,500);
        // ans[n] = 
        ans[n] = max(bruteForce(vec[n]),max(ans[l-1],ans[r-1]));
        cout << ans[n] << "\n";
    }

    return 0;
}