//himisir



#include<bits/stdc++.h>
using namespace std;


typedef long long LL;
typedef int I;
typedef unsigned long long ULL;
typedef long int LLI;
typedef long double LD;
typedef double D;
typedef float  F;
typedef stringstream SS;
typedef vector<string> VS;
typedef vector<LL> VI;
typedef vector<char> VC;
typedef map<string, string> MSS;
typedef map <LL,string> MIS;
typedef map <char,LL> MCI;
typedef map <string,LL> MSI;
typedef map <LL,LL> MII;
typedef pair<I, I> PII;
typedef long L;



#define Si(a, n) sort(a, a+n) //...................................
#define Ss(s) sort(s.begin(), s.end())
#define Ri(a, n) reverse(a,a+n)
#define Rs(s) reverse(s.begin(), s.end())
#define bs(a, n, c) binary_search(a, a+n, c)
#define S(s)  s.begin(), s.end()
#define sz(a) a.size() //...................................
#define ci(n) cin>>n  //...................................
#define ci2(a,b)	    cin>>a>>b
#define ci3(a,b,c)	    cin>>a>>b>>c
#define ci4(a,b,c,d)   cin>>a>>b>>c>>d
#define co(n) cout<<n
#define sp cout<<" "
#define nl cout<<"\n" //...................................
#define gl(s) getline(cin, s)
#define sqr(n) n*n
#define cube(n) n*n*n
#define dec(n) cout<<fixed<<setprecision(n)
#define fst first
#define snd second
#define gcd(a, b) __gcd(a, b)
#define Mn 0  //...................................
#define Mx 1000000000000000000 //...................................
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define gc getchar
#define pc putchar
#define mem(n,i)        memset(n,i,sizeof n)
//For loop increment
#define fi(i, a, n) for(int i=(a); i<=(n); i++)
//For loop decrement
#define fr(i, a, n) for(int i=(a); i>=(n); i--)
#define wh(n) while(n)




int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    /*
    ull n;
    while(ci(n)){
    		fi(i, 100, n){
    		co(i);nl;
    		}
    		//nl;

    }

    */


//-----------------------------------------------------------------------------

    I n;
    wh(ci(n)){
    	I a[n+1], c=0;
    	fi(i, 0, n-1){
    		ci(a[i]);
    		if(a[i]==1) c++;
    	}
    	I e=0, f=0;
    	fi(i, 0, n-1){
            I d=1, l=0, cc;
    		fi(j, i, n-1){
				cc=c;
				fi(k, i, j){
						if(a[k]==0) cc++;
						else cc--;


                }
                if(cc>e) e=cc;
    		}
    		if(e>f) f=e;
    	}
    	co(e); nl;

    }


}
