/*                                                       
                                                  *                            
                                                *####.                         
                               ##(.           ,#######,                        
                               #    *#      /#/    ####                        
                               .(      *##         ####                        
                                *.  ##             ####                        
                                 #   #             ####                        
                                  #                ####                        
                                   (               ####                        
                                   .(     .(       ####  Who Am I - No System Is Safe                        
                                    .*    #,       ####                        
                                   *#              ####                        
                                 ,#(((            .####                        
                                 .#  ,*            ####                        
                                   .#.*(#*         ####                        
                                             ##/   ####                        
                                               #######                         
                                                 ###,                          
*/
//Create_by:Nguyen Hoang Thong PTIT-HCM    ._.nhthong.DfVn._.
#include <bits/stdc++.h>
#include <iostream>                
#include <string>                
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
//-----------------Var------------------------//
typedef long long ll;
#define f0(i,a,b) for(ll i= a; i<= b; ++i)
#define f1(i,a,b) for(ll i= a; i>= b; --i)
ll n,t,b,c;
ll a[100005];
//----------------Funtion---------------------//
inline ll read() {
	char c = getchar();
	ll n = 0;
	while (c < '0' || c > '9') {
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		n = (n << 1) + (n << 3) + (c ^ 48);
		c = getchar();
	}
	return n;
}
ll gcd(ll a, ll b) {
    ll temp;
    while (b != 0) 
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
string tostring(ll n)
{
	stringstream ss;
	string s1;
	ss<<n;
	s1=ss.str();
	return s1;
}
ll toint(string s)
 {
 	ll x=0;
 	stringstream geek(s);
 	geek >> x;
 	return x;
 }
//------------------Main----------------------//
int main()
{
	 ios_base::sync_with_stdio(false);
         cin.tie(NULL); cout.tie(NULL);
          //code here
    cin>>n>>t;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(c=1;c<t;c=c+a[c]);
	cout<<(t==c?"YES":"NO");
	 return 0;
}