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
#define  mp make_pair
#define  pb push_back
typedef long long int ll;
const int N = 1e7+7,mod = 1e9+7;
int vis[N],prim[N],frq[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int Arr[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>Arr[i];
        vis[Arr[i]]++;
    }
    for(int i=2;i<N;i++)
    {
        frq[i] = frq[i-1];
        if( prim[i] )continue;
        frq[i] += vis[i];
        for(int j=i+i;j<N;j+=i)
            frq[i] += vis[j],prim[j] = 1;
    }
    int q;cin>>q;
    while(q--)
    {
        int l,r;cin>>l>>r;
        cout<<frq[min(r,N-1)]-frq[min(l-1,N-1)]<< "\n";
    }












    return 0;
}

