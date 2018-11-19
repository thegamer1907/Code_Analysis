#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define si(X) scanf("%d", &(X))
#define sll(X) scanf("%lld",&(X))
#define INFL 0x3f3f3f3f3f3f3f3fLL
const int mod = 1e9+7;
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll expo(ll base,ll pow){ll ans = 1;
   while(pow!=0){if(pow&1==1){ans = ans*base;ans = ans%mod;}
   base *= base;base%=mod;pow/=2;}return ans;}
ll inv(ll x){return expo(x,mod-2);}
ull llrand() {ull r = 0;for(int i = 0; i < 5; ++i){r = (r << 15)|(rand() & 0x7FFF);}return r & 0xFFFFFFFFFFFFFFFFULL;}
int dx[8] = {1 , 0 , -1 , 0 , 1 , -1 , -1 , 1};    // last 4 diagonal
int dy[8] = {0 , 1 , 0 , -1 , 1 , 1 , -1 , -1};
/*---------------------------------------------------------------------------------------------------------------------*/

const int M = 100001;
int arr[M];

set<pair<int , int> > res;
int main(){
    
    int h , m , s , st , en;
    cin >> h >> m >> s >> st >> en;
    
    h %= 12;
     
    
    if(m == 0 && s == 0){
        res.insert(make_pair((h - 1 + 12)%12 , h));
        res.insert(make_pair(h , (h + 1)%12 ));
        
    }
    else{
        res.insert(make_pair(h , (h + 1)%12 ));
    }
    
    if(m%5 == 0 && s == 0){
        int aa = m/5;
        res.insert(make_pair((aa - 1 + 12)%12 , aa));
        res.insert(make_pair(aa , (aa + 1)%12 ));
    }
    else{
        int aa = m/5;
        res.insert(make_pair(aa , (aa + 1) % 12) );
    }
    if(s%5 == 0){
        int aa = s/5;
        res.insert(make_pair((aa - 1 + 12)%12 , aa));
        res.insert(make_pair(aa , (aa + 1)%12 ));
    }
    else{
        int aa = s/5;
        res.insert(make_pair(aa , (aa + 1) % 12) );
    }
    
    arr[0] = h;
    arr[1] = m/5 + (m%5 != 0);
    arr[2] = s/5 + (s%5 != 0);
    
    st%=12;
    en%=12;
    
    int a = st;
    
    while(1){
        a = a%12;
        int nex = (a + 1 + 12)%12;
        if(res.count(make_pair(a , nex)) || res.count(make_pair(nex , a))) break;
        if(nex == en){
            cout<<"YES";
            return 0;
        }
        a = nex;
    }
    a = st;
    
    while(1){
        a = a%12;
        int nex = (a - 1 + 12)%12;
        if(res.count(make_pair(a , nex)) || res.count(make_pair(nex , a))) break;
        if(nex == en){
            cout<<"YES";
            return 0;
        }
        a = nex;
    }
    
    
    
    cout<<"NO";
}

