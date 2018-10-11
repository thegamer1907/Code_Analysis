 //MOHA

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3F3F3F3F
#define MAXNODES 101

int dx[] ={ 1, 0, -1, 0, -1, 1, -1, 1 };
int dy[] ={ 0, 1, 0, -1, -1, 1, 1, -1 };


void moha() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
}
const long double eps=1e-10;
const int  N = 1e5 +1;

ll n , s;
ll a[N];
ll z[N];
 ll ok (ll x){
     for (int i =0 ; i<n ; i++){
        z[i] = a[i] + ((i+1) * x);
     }

     sort ( z , z+n );
     ll sum=0 ;
     for (int i=0 ; i<x ; i++){
        sum+=z[i];
     }
     return sum ;
 }
int main()
{
ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

cin>>n>>s;

for (int i=0 ; i<n ; i++)
    cin>>a[i];

    ll a=0 , b=n+1;

    while (a<b-1){
        ll mid = (a+b)/2 ;

         if(ok(mid) <= s){
            a= mid;
         }
         else{
            b=mid;
         }



    }
    cout<<a<<" " <<ok(a)<<endl;



    return 0;
}
