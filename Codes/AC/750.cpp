#include <bits/stdc++.h>
using namespace std;
#define eps 1e-7
#define PI acos(-1)
#define de(x) cout<<#x<<'='<<x<<" , "
#define dee(x) cout<<#x<<'='<<x<<endl
#define sz(x) x.size()
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define per(i,a,b) for(int i=a;i>(b);--i)
#define mset(a,b) memset(a,b,sizeof(a))
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define pb push_back
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<int> vi;
const int maxn=1e5+5;
int dp[maxn][11];

bool check(int num){
    int sum=0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    return sum==10;
}

int main(){
    int k;
    cin>>k;
    int i=0;
    while(k){
        if(check(i)) k--;
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}

