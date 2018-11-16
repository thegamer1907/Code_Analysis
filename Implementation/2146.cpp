/*******************************\
 Name: MD ASHRAFUZZAMAN KHAN |
 School: COMILLA UNIVERSITY |
 CSE (5TH BATCH) |
 ********************************/

#include <bits/stdc++.h>

#define ll long long int
#define inf 1<<30
#define Pi 2*acos(0,0)
#define pi acos(-1)
#define PI 3.1415926535897932384626433832795
#define mem(x,y) memset(x,y,sizeof(x))
#define pf printf
#define sf scanf
#define MAX 50

template < class T > inline T gcd(T a,T b) {a=abs(a);b=abs(b); if(!b) return a; return __gcd(b,a%b);}
template < class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/__gcd(a,b))*b;}
//template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T ncr(T n,T r){return n*(n-1)/r;}

using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);

    int n;
    cin>>n;
    int x=0,y=0,z=0;
    int a,b,c;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0&&y==0&&z==0)
       cout<<"YES";
    else
        cout<<"NO";
   ///cin.get(); cin.get();
   return 0;
}
