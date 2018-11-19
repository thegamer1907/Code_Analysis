#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define forn(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define MOD (ll)10000007
const int N=1e5+100;
int mn=INT_MAX;

vector<ll> g;
bool v[MOD];

int check(string a,string s){
          fori(i,0,a.length()){
                    if(a.substr(i,2)==s) return 1;
          }
          return 0;
}

int main(){
          string s;
          cin>>s;
          ll n;
          cin>>n;
          string s1[n];
          
          fori(i,0,n) cin>>s1[i];
          
          fori(i,0,n){
                    fori(j,0,n){
                              string b=s1[i];
                              string a=b.append(s1[j]);
                            //  cout<<a<<" ";
                              if(check(a,s)==1){
                                        cout<<"YES";
                                        return 0;
                              }
                    }
          }
          cout<<"NO";
          return 0;
}