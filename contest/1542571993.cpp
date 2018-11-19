//Vini Vidi Vici
#include <bits/stdc++.h>
using namespace std;


// Shortcuts for "common" data types in contests
typedef long long ll;
//typedef long l;


typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define fori(i,a,b) for(int (i)=(a); (i)<=(b); ++i)
#define ford(i,a,b) for(int (i)=(a); (i)>=(b); --i)
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second


#define INF 1000000009 
#define NINF -1000000009
#define MOD 1000000007
#define MAX_N 200029

int main()
{
    //int i,j;
    
    ios_base::sync_with_stdio (false);
    ll h,m,s,t1,t2,x,y;
    cin>>h>>m>>s>>x>>y;
    t1=min(x,y);
    t2=max(x,y);
    ll f1=1,f2=1;
    if(h>=t2||h<t1)
        f1=0;
    if(m>=t2*5||m<t1*5||s>t2*5||s<t1*5)
        f1=0;

    if(h<t2&&h>=t1)
        f2=0;
    if((m>=t1*5&&m<t2*5)||(s>t1*5&&s<t2*5))
        f2=0;
    if(f1==1 || f2==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}