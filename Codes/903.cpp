/*Template by hemnath_d(Enlightened by chamow)*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vec vector<ll>
#define pll pair<ll,ll>
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fx first
#define sx second
#define inf 100000000000000
#define minf -100000000000000

int main()
{
    fastread;
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll diff=0,acon=0,bcon=0;
    ll len=1,i=0,j=0;
    if(s[i]=='a')
    	acon++;
    else
    	bcon++;
    j=1;
    while(j<n)
    {
    	diff=min(acon,bcon);
    	while(diff<=k&&j<n)
    	{
    		if(s[j]=='a')
    			acon++;
    		else
    			bcon++;
    		diff=min(acon,bcon);
    		if(diff<=k)
    			len=max(len,j-i+1);
    		j++;
    	}
    	if(s[i]=='a')acon--;
    	else bcon--;
    	i++;
    }
    cout<<len<<endl;
    return 0;
}