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

    double h,m,s,t1,t2; cin >> h >> m >> s >> t1 >> t2;
    
    bool ans = true;

    if(h == 12) h = 0; 
    double hh = h + m/(60.0) + (s/3600.0);
    double mm = (m+s/60.0)/5.0;
    double ss = s/5.0;
    int cnt = 0;
    // cout << hh << " " << mm << " " << ss << "\n";
    if(t1 > t2)
        swap(t1,t2);
    if(ss > t1 and ss < t2)
        cnt++;
    if(mm > t1 and mm < t2)
        cnt++;
    if(hh > t1 and hh < t2)
        cnt++;
    if(cnt == 0 or cnt == 3)
        cout << "YES\n";
    else
        cout << "NO\n";


    return 0;
}