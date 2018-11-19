/*.........................................
       .   *BISMILLAHIR RAHMANIR RAHIM*   .
       .       [ALLAH] is Almighty        .
       ....................................
 ********************************************
 *   . . . . . . . . . . . . . . . . . ..   *
 *   .  solved_by: zitul_mahmud;        .   *
 *   .  Electrical and Electronic       .   *
 *   .     Engineering [ EEE ]          .   *
 *   .  Islamic university,kushtia;     .   *
 *   .  zitulmahmud88@gmail.com;        .   *
 *   .  "STAY HUNGRY STAY FOOLISH"      .   *
 *   . . . . . . . . . . . . . . . . . ..   *
 ********************************************/

# include<sstream>
# include<bits/stdc++.h>

typedef long long ll;
typedef double    dl;
using namespace   std;


# define PI            2*acos(0.0)
# define MOD           100000007
# define sz            100005
# define FF            first
# define SS            second
# define PB            push_back
# define MP            make_pair
# define clr(x)        (x).clear()
# define all(x)        (x).begin(),(x).end()
# define MEM(a)        memset(a,-1,sizeof(a));/*filled with (-1)*/


///Input section
# define si(a) scanf("%d",&a)
# define sii(a,b) scanf("%d %d",&a,&b)
# define siii(a,b,c) scanf("%d %d %d",&a,&b,&c)

#define FR(i,a,b) for(ll i=(ll)a;i<(ll)b;i++)
#define FRR(i,a,b) for(ll i=(ll)a;i<=(ll)b;i++)

#define fr(i,a,b) for(int i=a;i<(int)b;i++)
#define frr(i,a,b) for(int i=a;i<=(int)b;i++)

# define sl(a) scanf("%lld",&a);
# define sll(a,b) scanf("%lld %lld",&a,&b);
# define slll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);


///Output section
# define CH getchar()
# define SP printf(" ")
# define NL printf("\n")
# define GCD(a,b) __gcd(a,b)
# define DB printf("I AM HERE\n")
# define open freopen("input.txt","r",stdin)
# define close freopen("output.txt","w",stdout)
# define FAST ios_base::sync_with_stdio(0),cin.tie(0)

///output for int data type
# define pi(a) printf("%d\n",a)
# define pii(a,b) printf("%d %d\n",a,b)
# define piii(a,b,c) printf("%d %d %d\n",a,b,c)

///output for ll data type
void pl(ll a){printf("%lld\n",a);}
void pll(ll a,ll b){printf("%lld %lld\n",a,b);}
void plll(ll a,ll b,ll c){printf("%lld %lld %lld ",a,b,c);}


# define LB(x,p) lower_bound(all(x),p)-(x).begin()
# define UB(x,p) upper_bound(all(x),p)-(x).begin()
# define VVV(x) for(__typeof(x.begin()) it=x.begin();it!=x.end();it++) cout << *it,SP;NL;



void sss(string s)               {cout<<s,NL;}
ll string_to_ll(string s)        {stringstream ss;ss<<s;ll n;ss>>n;return n;}
string ll_to_string(ll n)        {stringstream ss;ss<<n;string s;ss>>s;return s;}
dl DIS(dl x1,dl y1,dl x2,dl y2)  {return sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0));}


/*********************************************************************************
 *                 ###############################                               *
 *                 #  [ END OF ALL DECLARATION ] #                               *
 *                 ###############################                               *
 *********************************************************************************/


int flag,flag1;

              /*STARTING OF MAIN FUNCTION*/


int main()
{
       string s,s1;
       int i,n;
       cin>>s>>n;
       while(n--)
       {
              cin>>s1;
              if(s[0]==s1[1]) flag=1;
              if(s[1]==s1[0]) flag1=1;
              if(s==s1)
              {
                     flag=1;
                     flag1=1;
              }
       }
       if(flag && flag1) sss("YES");
       else sss("NO");
       return 0;
}



              /*Anyone who has never made a mistake has never tried anything new.
                             [ ~SIR ALBERT EINSTINE~ ]*/
