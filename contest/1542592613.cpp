#include <iostream>
#include <iterator>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define forin for(i=0;i<n;i++)
ll pwr(ll base, ll p){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}
 
ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}

int main() 
{
	ll t,n,i,j,x=0,y=0,f=0;
string s;
cin>>s;
cin>>n;
while(n--)
{
    string b;
    cin>>b;
    if(s.compare(b)==0)
    f=1;
    else
    if(b[1]==s[0])
    x=1;
    if(b[0]==s[1])
    y=1;
}
if(f==1)
cout<<"YES";
else if(x==1&&y==1)
cout<<"YES";
else
cout<<"NO";


	return 0;
}   