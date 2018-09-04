#include<bits/stdc++.h>
#define int long long
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef long long LL;
typedef unsigned long long ull;
typedef unsigned long long uLL;
using namespace std;
const int maxn=1e6+10;
const int INF=0x3f3f3f3f;
int gcd(int a,int b){return b ? gcd(b, a%b): a;  }
int lowbit(int x) {return x&-x; }
int a[maxn];
int32_t main()
{
   int n; cin>>n;
   int l=0;
   int r=n;
   while(1)
   {
       if(l+1>=r) break;
       int mid=(l+r)/2;
       int k=n;
       int x=0;
       int y=0;
       while(k)
       {
           if(mid>=k) { x+=k;       k=0;      }
           else       { x+=mid;     k=k-mid;  }
           y=y+k/10;
           k=k-k/10;
       }
       if(x>=y) r=mid;
       else l=mid;
       //cout<<l<<"  "<<r<<endl;
   }cout<<r<<endl;
}

