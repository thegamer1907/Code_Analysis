/*
~Like a small boat
~On the ocean
~Sending big waves
~Into motion
!Like how a single word
!Can make a heart open
!I might only have one match
!But I can make an explosion
#And all those things I didn't say
#Wrecking balls inside my brain
#I will scream them loud tonight
#Can you hear my voice this time?
@This is my fight song
@Take back my life song
@Prove I'm alright song
@My power's turned on
$Starting right now I'll be strong
$I'll play my fight song
$And I don't really care if nobody else believes
$'Cause I've still got a lot of fight left in me!!!
*/

#include "bits/stdc++.h"
using namespace std;

#define  F  first
#define  S  second
#define  pb push_back
#define  mp make_pair
typedef long long int ll;
const int N = 2e5+6;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;cin>>s;
    int sz = s.size();
    ll a = 0,b = 0,c = 0;
    for(int i=0;i<sz;i++)
    {
        if( s[i]=='B' )a++;
        else if( s[i]=='S' )b++;
        else c++;
    }
    ll na,nb,nc;cin>>na>>nb>>nc;
    ll pa,pb,pc;cin>>pa>>pb>>pc;
    ll tk;cin>>tk;
    ll lo = 0,hi = 1e14,mid,Res = 0;
    while(lo<=hi)
    {
        mid = (lo+hi)>>1;
        ll x = mid*a;
        x = max(0LL,x-na);
        ll y = mid*b;
        y = max(0LL,y-nb);
        ll z = mid*c;
        z = max(0LL,z-nc);
        ll now = x*pa+y*pb+z*pc;
        if( now<=tk )lo = mid+1,Res = mid;
        else hi = mid-1;
    }
    cout<<Res<< "\n";




    return 0;
}
