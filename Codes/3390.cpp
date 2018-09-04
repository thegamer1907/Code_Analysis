typedef long long ll;
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <map>
#include <queue>
#include <stack>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <utility>
#define pb push_back
#define mp make_pair
#define pll pair<ll,ll> 
#define plll pair<ll,pair<ll,ll> >

using namespace std;

ll n;
ll chk(ll x)
{
    ll tot,sum=0,val;
    tot=n;
    while(tot>0)
    {
        val=min(tot,x);
        tot-=val;
        tot-=((tot*10)/100);
        sum+=val;
    }
    if(sum*2>=n)
    return 1;
    return 0;
}
int main()
{
    ll l,r,mid;
    cin>>n;
    l=1;
    r=n;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(chk(mid))
        r=mid-1;
        else
        l=mid+1;
    }
    cout<<l<<endl;
	return 0;
}