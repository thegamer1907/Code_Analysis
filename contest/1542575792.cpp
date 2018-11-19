//
// Author: Harsh_Vasoya, DA-IICT
//

#include <bits/stdc++.h>

#define sync_off std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lli long long int
#define Hashmap unordered_map
#define Hashset unordered_set

#define all(v) v.begin(),v.end()
#define pb push_back

#define pii pair<int,int>
#define mp make_pair
#define F first
#define S second

#define si(n)     scanf("%d",&n)
#define sii(n, m) scanf("%d%d",&n,&m)
#define slli(n)  scanf("%lld",&n)
#define forn(i, a, b) for(int i=a;i<b;i++)

const int mod = 10000009;
const lli MOD = 1000000007;
const int INF = INT_MAX;
int DEBUG = 0;

using namespace std;

int main()
{

    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    h = h%12;
    t1 %= 12;
    t2 %= 12;

    double ds = (double)s*360/60.0;
    double dm = (double)m*360/60.0 + 6*s/60.0;
    double dh = (double)h*360/12.0 + 30*m/60.0 + 30*s/3600.0;

    double d1 = (double)t1*360/12.0;
    double d2 = (double)t2*360/12.0;

//    cout<<dh<<" "<<dm<<" "<<ds<<endl;
//    cout<<d1<<" "<<d2<<endl;

    bool flag=true;
    for(int deg=(int)d1+1;deg!=(int)d2+1;deg=(deg+1)%360){
//    	printf("%d ",deg);
        if(deg-1 <= ds && ds <= deg){
            flag=false;
            break;
        }
        if(deg-1 <= dm && dm <= deg){
            flag=false;
            break;
        }
        if(deg-1 <= dh && dh <= deg){
            flag=false;
            break;
        }
    }
//	printf("\n");
    if(flag){
        cout<<"YES";
        return 0;
    }

    flag=true;
    for(int deg=(int)d2+1;deg!=(int)d1;deg=(deg+1)%360){
        if(deg-1 <= ds && ds <= deg){
            flag=false;
            break;
        }
        if(deg-1 <= dm && dm <= deg){
            flag=false;
            break;
        }
        if(deg-1 <= dh && dh <= deg){
            flag=false;
            break;
        }
    }

    if(flag)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}


