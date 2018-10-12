//THIS IS MY DESIGN

#include<bits/stdc++.h>
#define pb(a)           push_back(a)
#define mp(a,b)         make_pair(a,b)
#define pii             pair<int,int>
#define ff              first
#define ss              second
#define SIZE            100010
#define write           freopen("output.txt","w",stdout)
#define read            freopen("input.txt","r",stdin)
#define eps             1e-9
#define MOD             1000000007
#define ALL(a)          a.begin(),a.end()
#define CLEAR(a)        memset(a,0,sizeof(a))
#define SET(a)          memset(a,-1,sizeof(a))
using namespace std;
typedef long long int L;
int dx[]={1,-1,0,0,1,1,-1,-1};
int dy[]={0,0,1,-1,-1,1,1,-1};
int biton(int n,int pos){return n = n | (1<<pos);}
int bitoff(int n,int pos){return n=n & ~(1<<pos);}
bool bitcheck(int n,int pos){return (bool)(n & (1<<pos));}
inline int nxt(){int a;scanf("%d",&a);return a;}
inline L NXT(){L a;scanf("%lld",&a);return a;}
template <typename T> string NumberToString ( T Number ) { ostringstream ss; ss << Number; return ss.str(); }
#ifdef lucifer
     #define debug(args...) {cerr<<"*: "; dbg,args; cerr<<endl;}
#else
    #define debug(args...)  // Just strip off all debug tokens
#endif

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cerr<<v<<" ";
        return *this;
    }
}dbg;
string str[SIZE*5];
vector<int> HASH[SIZE*5];
const L base = 31;
void gethash(int n){
    L hash_val = 0;
    for( auto i : str[n]){
        hash_val = hash_val * base + i;
        hash_val%=MOD;
        HASH[n].pb(hash_val);
    }
    return;
}
int endpoint[SIZE*5];
int binaryserach(int indx1 , int indx2)
{
    int low = 0 ;
   // debug(indx1,indx2);
    int high = min( (int)(str[indx1].size()-1) , endpoint[indx2]);
    //debug(high);
    int ans = 0;
    while(low<=high){
        int mid = low+high >> 1;
        if( HASH[indx1][mid] == HASH[indx2][mid] ){
            low=mid+1;
            ans = mid;
        }
        else high = mid-1;
    }
    return ans;
}
int main()
{
    #ifdef lucifer
        //read;
        //write;
    #endif
    ios_base::sync_with_stdio(0);
    int n ;
    cin>>n;
    for(int i = 0 ; i<n;i++){
        cin>>str[i];
        gethash(i);
    }
    endpoint[n-1] = str[n-1].size()-1;
   // debug(endpoint[n-1]);
    for(int i =  n-2;i>=0;i--){
        int indx = binaryserach(i,i+1);
       // debug(indx);
        if(indx==endpoint[i+1]){
            endpoint[i] = endpoint[i+1];
        }
        else if(indx== str[i].size()-1){
            endpoint[i] = str[i].size()-1;
        }
        else{
            if( str[i][indx+1] <= str[i+1][indx+1]){
                endpoint[i] = str[i].size()-1;
            }
            else{
                endpoint[i] = indx;
            }
        }
    }
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<=endpoint[i];j++){
            cout<<str[i][j];
        }
        cout<<endl;
    }
}
