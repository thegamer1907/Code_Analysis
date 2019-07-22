#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<lli> vli;
typedef priority_queue <int, vector <int>, greater <int> > min_pq;

const int MOD	= 1e9 + 7;

#define fastio			ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define init(a)         memset(a,0,sizeof(a))    
#define pb              push_back  
#define all(a)          a.begin(),a.end()  
#define loop(i,n)       for(int i=0;i<n;i++)  
#define loops(i,s,n)    for(int i=s;i<n;i++)
#define rloop(i,n)      for(int i=n-1;i>=0;i--)
#define rloops(i,s,n)   for(int i=n-1;i>=s;i--)

template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template <typename T> T lcm(T a, T b){return (a*b)/gcd(a,b); }


double tick(){static clock_t oldt,newt=clock();double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}


int main(){
    fastio;

    #ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
	#endif

    lli n,m,k;
    cin>>n>>m>>k;
    vli p(m);
    loop(i,m){
        cin>>p[i];
    }
    int ans=0;
    int i=0;
    lli v=k,d=0;
    while(i<m){
        d=0;
        while(i<m && p[i]<=v){
            d++;
            i++;
        }
        if(d>0){
            ans+=1;
            v+=d;
        }
        else{
            int x=ceil((double)(p[i]-v)/(double(k)));
            v+=x*k;
        }
        // cout<<v<<endl;
    }
    cout<<ans<<endl;
    // cout<<"Execution time : "<<tick()<<"\n";

    return 0;
}