/*
  In The Name Of GOD
  mohammad330A
*/

#include <bits/stdc++.h>

using namespace std ; 

typedef long long int ll ; 
typedef long double ld ; 
typedef pair< ll , ll > pii ;

#define pb push_back 
#define mp make_pair
#define F first
#define S second
#define all(X) X.begin(),X.end()a

const int maxn = (1e5) + 10;
const int mod =(1e9) + 7 ;
const int inf = (1e9) + 3 ;

int n , k;

bool is(pii a , pii b)
{
    if(a.F>b.F)
        return 1;
    if(a.F==b.F && a.S>=b.S)
        return 1;
    return 0;
}

pii sum(pii a , int b)
{
    int x = b/60;
    a.F+=x;
    a.S += b%60;
    if(a.S>=60){
        a.S%=60;
        a.F++;
    }
    return a;
}

pii mine(pii a ,ll b)
{
    int x = b/60;
    int y = b%60;
    a.F -= x;
    a.S -= y;
    if(a.S<0)
    {
        a.S = 60-abs(a.S);       
        a.F--;
    }
    return a;
}

int main()
{
    cin>>n>>k;
    pii h= mp(20 , 0);
    pii ha = mp(24 , 0);
    ha = mine(ha , k);
    
    int ans=0;
    for(int i=1 ; i<=n && is( ha , sum(h , i*5) ) ; i++)
    {
        ans++;
        h = sum(h , i*5);
    }
    cout<<ans;
    return 0;
}
