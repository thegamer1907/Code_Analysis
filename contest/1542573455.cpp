#include<bits/stdc++.h>
#define FAST std::ios::sync_with_stdio(false);
#define endl '\n'
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define MAX_N 100005
#define Mem(a,b) memset(a,b,sizeof(a))
#define FREI freopen("in.txt","r",stdin)
#define FREO freopen("out.txt","w",stdout)
using namespace std;
const ll mod=1e9+7;

unordered_map <char,int>mp1,mp2;

int main(){
  // FREI;
   FAST;
   double h,m,s,t1,t2;
   cin>>h>>m>>s>>t1>>t2;
   if(m>0||s>0)h=((int)h)%12+0.5;
   m=m/5;
   if(s>0||m-(int)m>1e-8)m=(int)m+0.5;
   s=s/5;
   if(s-(int)s>1e-8)s=(int)s+0.5;
   double a[3];
   a[0]=h;
   a[1]=m;
   a[2]=s;
   sort(a,a+3);
   bool flag=0;
   //cout<<a[0]<<" "<<a[1]<<"  "<<a[2]<<endl;
   if(t1>=a[0]&&t2>=a[0]&&t1<=a[1]&&t2<=a[1])flag=1;
   if(t1>=a[1]&&t2>=a[1]&&t1<=a[2]&&t2<=a[2])flag=1;
   if(t1>=0&&t1<=a[0])t1+=12;
   if(t2>=0&&t2<=a[0])t2+=12;
   if(t1>=a[2]&&t2>=a[2]&&t1<=(12+a[0])&&t2<=(12+a[0]))flag=1;
   if(flag)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   return 0;
}


