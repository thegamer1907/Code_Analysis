#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MOD 1000000007
#define pp pop_back
#define MAXN 100001
#define mp make_pair
#define ff first
#define ss second
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286 
#define inf LLONG_MIN
#define ll long long
void fast(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll n,t,i,j;
    cin>>n>>t;
    string s;
    cin>>s;
    for(i=0;i<t;i++){
        for(j=0;j<n-1;j++){
            if(s[j]=='B'&&s[j+1]=='G'){
                 s[j+1]='B';s[j]='G';++j;
             }
        }
    }
    cout<<s;

}