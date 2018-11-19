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

set<int> se;

int main(){
    
    int ques , team;
    si(ques);  si(team);
    
    vector<int> vec;
    
    for(int i = 1 ; i <= ques ; i++){
        int mul = 1;
        int here = 0;
        for(int j = 0 ; j < team ; j++){
            int a;
            si(a);
            here += mul*a;
            mul *= 2;
        }
        if(here == 0){
            cout<<"YES";
                return 0;
        }
        if(se.count(here) == 0) vec.push_back(here);
        se.insert(here);
    }
    
    for(int i = 0 ; i < vec.size() ; i++){
        for(int j = i + 1 ; j < vec.size() ; j++){
            if((vec[i]&vec[j]) == 0){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
    
    
    
}