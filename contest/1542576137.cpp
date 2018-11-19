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
ll h,m,s,t1,t2;
cin>>h>>m>>s>>t1>>t2;
ll oh=0,om=0,os=0,ah=0,am=0,as=0;
if(t1>t2)
{
    n=t1;
    t1=t2;
    t2=n;
}
//cout<<h<<" "<<t1<<" "<<t2<<" "<<s<<" "<<m;
if((h==t1||h==t2)&&s==0&&m==0)
{cout<<"NO";return 0;}
if(s==t1*5||s==t2*5||(m==t1*5&&(s==0))||(m==t2*5&&(s==0)))
{cout<<"NO";return 0;}
if(((h>t1||(h==t1&&(s!=0||m!=0)))&&(h<t2)))
oh=1;
else
ah=1;
if(((m>t1*5)||(m==t1*5&&(s!=0)))&&m<t2*5)
om=1;
else
am=1;
if((s>t1*5)&&(s<t2*5))
os=1;
else
as=1;
//cout<<oh<<" "<<om<<" "<<os;
if((oh==1&&om==1&&os==1)||(ah==1&&am==1&&as==1))
cout<<"YES";
else
cout<<"NO";





	return 0;
}   