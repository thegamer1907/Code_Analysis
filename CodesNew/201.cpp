/*

    279B - binary search on prefix sum arr 
    prefix[i] - prefix[x] <= T 
    lower_bound on prefix[x]
    4/10/18
    by ahmed_drawy aka. TLLE

*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//#define push_back               pb;
//#define make_pair               mp;
#define lp(i,start , end)       for(int i = start ; i<end ; ++i)
#define Rlp(i,start , end)      for(int i = start ; i>end ; --i)
#define all(v)                   ((v).begin(),(v).end())
#define sz(v)                  (int)((v).size())
#define clr(v,d)                memset(v , d , sizeof(v))
typedef long long               ll;
typedef vector<int>             vi;
typedef vector  <ll>            vll;
typedef vector<vector<int> >    adj;
typedef pair<int ,int>          pii;


const double EPS =1e-7;
const int OO = 1e6;
bool sortpair( const pair<int , int> & x, const pair<int , int> & y)
{

    return  x.first != y.first ? x.first < y.first : x.second > y.second ;


}
int dcomp(double x , double y)
{
    return fabs(x-y) <= EPS? 0: x>y?1:-1;
}
void smile(){
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
}

void printarr(ll arr [] , int n){
lp(i,0,n) cout<<arr[i]<<" ";cout<<endl;
}


ll arr[100005];
int BS_prefix( int n , ll v){
    int r = n -1 , l = 0 ;
    while(l < r){
        int mid = l+(r-l)/2;
        if(arr[r] -arr[mid]<=v)  ;
        else if(arr[r]- arr[mid]>v) l = mid ;
        else                r = mid;

    }
    return l;


}
int main(){
    smile();
    int n ;ll t ;cin>>n>>t;
    lp(i,1,n+1)   cin>>arr[i] , arr[i] +=arr[i-1];
    int cnt = 0;
    lp(i,0 , n+1) {
        cnt = max(cnt , i-(lower_bound(arr , arr+n+1 , arr[i] -t) - arr));
    }
    cout<<cnt;
    return 0;
}
