#include <bits/stdc++.h>
using namespace std;

#define repr(i, n) for (int i = (n) - 1; i >= 0; i--)
#define pb push_back
#define pi 3.141592653589793
#define sll signed long long int // -10^9 to 10^9
#define ll long long int// for 0 to 10^18
#define ull unsigned long long int // for 0 to 10^18
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
/* 
ll fast_pow(ll a, ll b){}  //a^b in O(logb) time  to find (a^b)modM just add mod term where mult happens :)
	ll res = 1;
	while ( b > 0 ) {
		if ( b&1 ) res = (res*a)%M;
		a = (a*a)%M;
		b >>= 1;
	}
	return res;
}
ll sum_ofGP_modM(ll a , ll n, ll mod)  //// (1 + A^1 +A^2 + A^3 + A^4 + -------+ A^N) % M  usually here n= Total terms in series-1
////and  if series is something for eg 3^2 + 3^4 here a= 9,r=9  our ans can be found out as 
// let a1= first term 3^2 just do ans = a1*sum_ofGP_modM(9 , N-1, ull mod)
	if(n == 0) return 1;
	if(n == 1) return (1 + a) % mod;
	ll res;
	if(n % 2)
		res = (a + 1) * GPSumWithMod((a*a) % mod , (n-1)/2);
	else{ res = (a + 1) * GPSumWithMod((a*a) % mod , n/2 - 1);res %= mod;res = (res * a) + 1;}
    return res % mod;
}

//Whenever we have (a/b)%P == (a * fast_pow(b,P-2))%P
bool isprime(ll a){
  if(a==2)return 1;
  if(!(a&1))return 0;
  for(ll i=3;i*i<=a;i+=2)
    if(a%i==0)return 0;
  return 1;
} */


int main(){	
    ull n,m,k;cin>>n>>m>>k;
    vector <ull> p(m);
    for(int i=0;i<m;i++){
        cin>>p[i];
    }
    ll cnt=0;
    while(p.size()!=0){
        int st=p[0];
        if(st%k==0){
            p.erase(p.begin());
            for(int i=0;i<p.size();i++){
                p[i]-=1;
            }
            cnt++;
        }
        else{
            int llmt=(st/k)*k;
            int uplmt=llmt+k;
            int i=0,cnt1=0;
            while(i<p.size()){
                if(p[i]>llmt && p[i]<=uplmt){
                    i++;
                    cnt1++;
                }
                else break;
            }
            int j=0;
            while(j<i){
                p.erase(p.begin());
                j++;
            }
            cnt++;
            for(int j=0;j<p.size();j++ ){
                p[j]-=cnt1;
            }
        }

    }
    cout<<cnt<<endl;
   return 0;
}