#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> //required
#include <ext/pb_ds/tree_policy.hpp> //required
using namespace __gnu_pbds; //required 
template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

#if DEBUG && !ONLINE_JUDGE
    #include "header.h"
#else
    #define debug(args...)
#endif

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef pair<int,ii> iii;
typedef vector<pair<ii,int> > viii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef map<int,int> mii;
typedef map<char,int> mci;
typedef long long lli;
typedef long double ld;
typedef vector<lli> vlli;


#define pb push_back
#define loop(i,a,b) for(auto i=(a);i<b;i++)
#define loopneg(i,a,b) for(auto i=(a);i>b;i--)
#define INF (int)1e9
#define EPS 1e-9;
#define PI 3.14159265359
#define swap(a,b) { auto c = a; a=b; b=c; }
#define EULER 2.7182818284
#define MOD 1000000007
void preprocess(void) {
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(20);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    preprocess();
    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    // cout<<t;
    loop(i,0,t){
       loop(j,0,n){
           if(str[j]=='B'&&str[j+1]=='G'){
               str[j]='G';
               str[j+1]='B';
               j++;
           }
       }
    //    cout<<str<<endl;
}
    
    cout<<str;
    return 0;
}