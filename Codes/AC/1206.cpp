/**
 *    author:  NEZZ
**/
#include <bits/stdc++.h>
#define rep(i,a,b) for (int i=a;i<b;i++)
#define rep2(i,a,b) for (int i=a;i>=b;i--)
#define f first
#define s second
#define endl '\n'
#define ll long long
#define pii pair <int,int>
#define pll pair <ll,ll>
#define vi vector <int>
#define vl vector <ll>
#define pb push_back
#define mk make_pair
#define sz(a) a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define input freopen("intput","r",stdin)
#define output freopen("output","w",stdout)
#define fastIO ios_base::sync_with_stdio (0),cin.tie(0)
#define debug input,output


using namespace std;
void affiche (int t[],int n){ rep (i,0,n) cout<<t[i]<<" ";cout<<endl;}
void afficheV (vi t){rep (i,0,sz(t))cout<<t[i]<<" ";cout<<endl;}

int main (){
      fastIO;
int n,m;
 cin>>n>>m;
 map <string,int>mp;
 int c=0;
 rep (i,0,n){
   string s;
   cin>>s;
   mp[s]++;
 }
  n=mp.size();
 rep (i,0,m){
  string s;
  cin>>s;
  if (!mp[s])
    mp[s]++;
  else c++;
 }

  if (n-c+c/2+c%2>mp.size()-n+c/2)
     cout<<"YES";
  else cout<<"NO";
}
