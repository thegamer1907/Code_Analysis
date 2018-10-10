//Template

//By Anik :)

#include <bits/stdc++.h>
using namespace std;

#define   f(i,n) 					for(int i=0;i<(n);i++)
#define   ff(i,n) 					for(int i=1;i<=(n);i++)
#define   m0(X) 					memset((X), 0, sizeof((X)))
#define   m1(X) 					memset((X), -1, sizeof((X)))
#define   pb(x) 					push_back(x)
#define   F     					first
#define   S  						second
#define   mp 						make_pair
//#define   inf                       1LL<<60LL

typedef long long ll;

int rd(int &x){ return scanf("%d",&x);}
int rd(int &x,int &y){ return scanf("%d %d",&x,&y);}
int rd(int &x,int &y,int &z){return scanf("%d %d %d",&x,&y,&z);}
int rd(int &x,int &y,int &z,int &s){return scanf("%d %d %d %d",&x,&y,&z,&s);}

#define debug(args...) { cerr<<__LINE__<<":: ";dbg,args; cerr<<endl;}
struct debugger { template<class T> debugger& operator,(const T& v) { cerr<<v<<" "; return *this; } } dbg ;
template <typename T> void debugv (vector <T> vec) {cerr<<"printing vector:: ";f(i,vec.size()){cout<<vec[i]<<" ";}cerr<<endl;}
template <typename T> void debugs (set <T> s){cerr<<"printing set:: ";for(auto it=s.begin();it!=s.end();it++){cout<<(*it)<<" ";}cerr<<endl;}


vector <int> zAlgo ( string s )
{
   int l = 0, r = 0, n=s.length();
   vector <int> z(n);
   z[0] = n;
   for(int i = 1; i < n; i++) {
      if(i <= r && z[i-l] < r-i+1) z[i] = z[i-l];
      else {
         l = i;
         if(i > r) r = i;
         while(r < n && s[r-l] == s[r]) r++;
         z[i] = r-l; r--;
      }
   }
   return z;
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();

    vector <int> Z = zAlgo(s);

    int mx=0, ans=0;
    for(int i=1; i<n; i++)
    {
        if(Z[i]==n-i && mx>=Z[i] && ans<Z[i]) ans=Z[i];
        mx = max (mx,Z[i]);
    }

    if(ans==0) printf("Just a legend");
    else cout<<s.substr(0,ans);


    return 0;
}
















