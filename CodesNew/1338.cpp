#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define ntq(z)  long long int z; cin>>z; for(long long int i=0;i<z;i++)
#define fi(x9,y9) for(long long int i=x9;i<y9;i++)
#define f(z9) for(long long int i=0;i<z9;i++)

typedef vector< ll > vi;
typedef vector< pair<ll,ll> > vp;
typedef vector< vi > vvi;
typedef pair< ll,ll > ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

void printprecise(double l,ll precision)
{
    std::cout << std::fixed;
    std::cout << std::setprecision(precision);
    std::cout << l;
}

ll gcd(ll a,ll b)
{
  if(a%b==0)
    return b;
  else
    return gcd(b,a%b);
}

int main()

{
   
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
    #ifndef ONLINE_JUDGE    
    freopen("input.txt", "r", stdin);    
    freopen("output.txt", "w", stdout);
    #endif   
    
    ll nb,ns,nc,pb,pc,ps,r,b=0,s=0,c=0,t=0,m,n;
    string ss;    
    cin>>ss;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    ll ln=ss.length();
    f(ln)
    {
      if(ss[i]=='B')
        b++;
      else if(ss[i]=='S')
        s++;
      else
        c++;
    }
    while(nb>=b&&nc>=c&&ns>=s)
    {
      nb-=b;
      ns-=s;
      nc-=c;
      t++;
    }
    //cout<<nb<<ns<<nc;
    ll lt=0,rt=1000000000001;
    while(lt<=rt)
    {
      //cout<<lt<<" "<<rt<<"\n";
      m=(lt+rt)/2;
      if(r>=max((ll)0,(m*b-nb)*pb)+max((ll)0,(m*s-ns)*ps)+max((ll)0,(m*c-nc)*pc))
        {
          lt=m+1;
          n=m;
        }
      else if(r<max((ll)0,(m*b-nb)*pb)+max((ll)0,(m*s-ns)*ps)+max((ll)0,(m*c-nc)*pc))
        rt=m-1;      
    }
    cout<<t+n;

    
return 0;
}