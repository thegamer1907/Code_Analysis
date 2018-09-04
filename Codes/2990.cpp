/*     !ya khoda!     */
#include<bits/stdc++.h>

#define ll long long
#define ld long double

#define pp push
#define po pop()
#define pb push_back
#define pf push_front
#define pob pop_back()
#define pof pop_front()

#define F first
#define S second
#define mkp make_pair
#define pll pair<ll,ll>

#define poow(x) (1LL<<(x))
/*==========================================================================*/
using namespace std;
/*==========================================================================*/
const int N=1e6+100;
ll n,k,f[N];
string s;
bool vis[N];
/*==========================================================================*/
int main()
{
	ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);

	cin>>s;   n=s.size();
	for(int i=1;i<n;i++)
    {
        while(k>0 && s[k]!=s[i])   k=f[k];
        if(s[k]==s[i])   k++;
        if(i!=0 && i<n-1)   vis[k]=1;
        f[i+1]=k;
    }

    k=f[n];
    while(k>0 && vis[k]==0)   k=f[k];
    if(k>0)   for(int i=0;i<k;i++)   cout<<s[i];
    else   cout<<"Just a legend";
	return 0;
}