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
string arr[M];
int main(){
    
    string target;
    cin >> target;
    
    int n;
    si(n);
    
    
    for(int i = 1 ; i <= n ; i++){
        string str;
        cin >> arr[i];
        if(arr[i] == target){
            cout<<"YES";
            return 0;
        }
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(arr[i][1] == target[0] && arr[j][0] == target[1]){
                cout<<"YES";
            return 0;
            }
        }
    }
    cout<<"NO";
    
}

