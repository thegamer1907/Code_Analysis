#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll mod = 1e9+7;

ll gcd(ll a,ll b){
	if(b==0)return a;return gcd(b,a%b);
}
ll expo(ll base,ll pow){
    ll ans = 1;
    while(pow!=0){
        if(pow&1==1){ans = ans*base;}
        base *= base;pow/=2;}return ans;
}
ll inv(ll x){return expo(x,mod-2);}

int vis[200000];

int cmp(pair <pair<ll,ll>, ll> p1, pair <pair<ll,ll>, ll> p2){
    int dif1 = abs(p1.first.first-p1.first.second);
    int dif2 = abs(p2.first.first-p2.first.second);
    return dif1 < dif2;
}


int main(){
    //freopen("ip.txt", "rt", stdin);
    //freopen("op.txt", "wt", stdout);
  string s;
  cin >> s;
  int n;
  cin >> n;
  int cond = 0,cond1 = 0, ind1 = -1, cond2 = 0, ind2 = -1;
  while(n--){
        string s1;
        cin >> s1;
        if(s1 == s) cond = 1;
        if(s1[1] == s[0]){
                cond1++;
                ind1 = n;
        }
        if(s1[0] == s[1]){
           cond2++;
           ind2 = n;
        }
  }


  if(cond){
    cout << "YES";
  }
  else{
    if(cond1&&cond2){
        cout << "YES";
    }
    else cout << "NO";
  }
}

