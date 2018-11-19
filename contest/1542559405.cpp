#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ft front()
#define pp pop_back()
#define mp make_pair
#define fr first
#define sc second
#define sz(x) x.size()
#define all(x) x.begin() , x.end()
#define mem(x) memset(x,0,sizeof(x))
#define _ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
typedef long long int ll;
typedef pair<int,int> pii;
const ll N=1e4+2;
const ll mod=1e9+7;

bool fnd;

int32_t main()
{_
    int cheak=0, h, m, s, t1, t2;   double a[5];           cin>>h>>m>>s>>t1>>t2;
    a[0]=h*5 + 0.1;   a[1]=m + 0.1;   a[2]=s + 0.1;   a[3]=t1*5;   a[4]=t2*5;
    sort(a,a+5);
    for(int i=0; i<4; i++)  if( ( ( t1*5 == a[i] ) && ( t2*5 == a[i+1] ) ) || ( ( t2*5 == a[i] )&& ( t1*5 == a[i+1] ) ) )  cheak++;
    if((t1*5==a[0] && t2*5==a[4])||(t2*5 == a[0] && t1*5 == a[4])) cheak++;
    return cout<<(cheak>0 ? "YES"  : "NO"),0;
}
//514B
//515C
//552B
//746B
