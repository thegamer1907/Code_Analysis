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
    ll n,i,x=0,y=0,z=0,a,b,c;
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>a>>b>>c;
    	x+=a;y+=b;z+=c;
    }
    if(x==0&&y==0&&z==0)
    	 cout<<"YES";
    else
    	cout<<"NO";	
    return 0;
}