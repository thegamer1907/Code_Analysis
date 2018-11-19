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

int main () {
    nitro;
    #ifdef DBG
        freopen("in","r",stdin);
    #endif

    int n,k; cin >> n >> k;
    // int A[n][k];
    map<vector<int>, int> m;
    for(int i=0;i<n;i++){
        vector < int > v;
        for(int j=0;j<k;j++){
            int a;cin >> a; v.pb(a);
        }
        if(m.find(v) == m.end()) m[v] = 1;
        else m[v] += 1;
    }

    map<vector < int> ,int >::iterator it = m.begin();
    while(it != m.end()){
        map<vector <int>, int>::iterator it2 = m.begin();
        while(it2 != m.end()){
            vector < int > v1 = it->first;
            vector < int > v2 = it2->first;
            bool ans = true;
            for(int i=0;i<k;i++){
                if(v1[i] == 1 and v2[i] == 1){
                    ans = false;
                    break;
                }
            }
            if(ans){
                cout << "YES\n";
                return 0;
            }
            it2++;
        } 
        it++;
    }
    cout << "NO\n";
    return 0;
}