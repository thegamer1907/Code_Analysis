#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define emp emplace 
#define pb push_back
#define mp make_pair
#define mem(arr,val) memset(arr,val,sizeof arr)
// int val = stoi(str1);// converts string to integer 
using lli = long long int;
#define nl(n) for(i=0;i<n;i++)
#define in(a,n) lli a[n];for(i=0;i<n;i++)cin>>a[i];
#define pi 3.141592653589793238
#define rev(v) reverse(v.begin(),v.end())
#define sort(v) sort(v.begin(),v.end())
#define gsort(v) sort(v.begin(),v.end(),greater<ll>())
#define bc __builtin_popcountll  // number of bits set in a number or no of 1's in a no 
//#define bc2 _mm_popcnt_u64

#define lower(a) transform(a.begin(),a.end(),a.begin(),::tolower);
#define upper(a) transform(a.begin(),a.end(),a.begin(),::toupper);
// if( (num & 1)>=1) to check if a number is odd  
//  initialise a vector with 0 values ,vector<int> a(26,0); 
//inline ll pwr(ll base, ll n, ll m) {ll ans = 1;while( n > 0 ) {if ( n % 2 == 1 )ans = (ans * base) % m; base = (base * base) % m;n/=2;}return ans;}

// accumulate(a.begin(),a.end(),0) sum in a range ,here 0 is the initial sum
#define mod 1000000007
// upper1 = std::upper_bound(v.begin(), v.end(), 35);   

// lower1 = std::lower_bound(v.begin(), v.end(), 35); index of same upper element in log time  
//It returns an iterator to the first element which is not less than k. 

//s.order_of_key(6) : Count of elements strictly smaller than 6 is 2.
//order_of_key: The number of items in a set that are strictly smaller than k
//find_by_order: It returns an iterator to the ith largest element(counting from zero)
//template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// part of policy based data structure not a part of c++ library but of g++ library...


// typeid(x).name() for type of variable it return i for integers, d for doubles, Pi for the pointer to integer
//using namespace __gnu_pbds;
using namespace std;

int days[36] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30,
        31, 30, 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31,
        30, 31 };

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli T,i,j,k,ans=0,con=0,val=0,n,num=0,len;
string s,str;
  cin>>n>>k;
    in(a,n);
    for(i=0;i<k;i++){if(a[i]>0)ans++;}
    val=a[k-1];
    for(i=k;i<n;i++){if(a[i]==val && val>0)ans++;}
    cout<<ans;
    
    return 0;}