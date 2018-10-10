

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define sz(a) a.size()
#define endl '\n'
#define inf 0x3f3f3f3f3f3f3f3f
#define mod 1000000007
#define fastio std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define rep(i,a,b) for( int i=a; i<b; i++)
#define ii pair < ll , ll >
#define F first
#define S second
#define input freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r+",stdin)
#define output freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w+",stdout)
#define debug input; output

using namespace std;

  const int N=1000006;


  inline char nc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
   }

  template<typename T = int>
    inline T nxt(){
    char c=nc();T x=0; int f=1;
    for(;c>'9'||c<'0';c=nc())if(c=='-')f=-1;
    for(;c>='0'&&c<='9';x=x*10+c-'0',c=nc());
    x*=f;
    return x;
     }

      ll f[N],f2[N]; ll n;

       ll pref(ll f[N],string s)
         {

           f[0]=0;


           for (int i=1; i<n; ++i) {

           int j = f[i-1];

           while (j > 0 && s[i] != s[j])

              j = f[j-1];

           if (s[i] == s[j])  ++j;

              f[i] = j;

            }


         }

     int main()
       {fastio;

           string s;
           cin>>s;
            n=sz(s);

           pref(f,s);

           ll ans=0;


           for(int i=1;i<n-1;i++)
           {
               if (f[i]==f[n-1] || f[i]==f[f[n-1]-1])
               {
                   ans=max(ans,f[i]);
               }
           }


           if (!ans )
            cout<<"Just a legend";
           else
           {
               for(int i=0;i<ans;i++) cout<<s[i];
           }

       }




