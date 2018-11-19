#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define fi first
#define se second


vector<list<int>> v;
//ll a[100005],b[100005];
vector<int> l;
pair<int,int>p;
//pair<ll,int> a[500005];
set<int> s;

bool comp(const int a,const int b){
    return a<b;
}
ll ncm(ll n, ll m){
    ll ans=1;
    for(ll i=1;i<=m;i++){
        ans=ans*(n-i+1)/i;
    }
    return ans;
}
bool RelativelyPrime (int a, int b) { 
   return (a<b) ? RelativelyPrime(b,a) : !(a%b) ? (b==1) : RelativelyPrime (b, a%b);
}

int main() {
   ios_base::sync_with_stdio(false);
     cin.tie(NULL);
   // freopen("input.txt","r",stdin);
   char a,b;
   cin>>a>>b;
   int n;
   cin>>n;
   char c[n][2];
   for(int i=0;i<n;i++){
    char x,y;
    cin>>x>>y;
    c[i][0]=x;c[i][1]=y;
    if((x==a&&y==b)||(x==b&&y==a)){cout<<"YES";return 0;}

   }
   for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
        if(c[i][1]==a){
        for(int k=0;k<n;k++){
            for(int l=0;l<2;l++){
                if(c[k][0]==b){
                    cout<<"YES";return 0;
                }
            }
        }
    }
    }
   }
   cout<<"NO";return 0;

}