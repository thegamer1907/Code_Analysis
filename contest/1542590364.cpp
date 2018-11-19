/*#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define mp(a,b) make_pair(a,b)
#define minmax(a,b) (a>b)?make_pair(b,a):make_pair(a,b)
#define PI 3.14159265
#define codeforces 1
#define debug
#define pb push_back
ll gcd(ll a,ll b){return b>0?gcd(b,a%b):a;}
int main(){
    char p[4];
    scanf("%s",p);
    int n;
    scanf("%d",&n);
    char arr[n][4];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    bool pass=false;
    for(int i=0;i<n;i++){
        if(p[0]==arr[i][0]&&p[1]==arr[i][1]){
            pass=true;
        }
    }
    int in1=-1,in2=-1;
    for(int i=0;i<n;i++){
        if(p[0]==arr[i][1]){
            in1=i;
        }
        if(p[1]==arr[i][0]){
            in2=i;
        }
    }
    if(in1>=0 &&in2>=0){
        pass=true;
    }
    if(pass){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
