#include "bits/stdc++.h"
#define MAXN 600009
#define INF 1000000007
#define mp(x,y) make_pair(x,y)
#define all(v) v.begin(),v.end()
#define pb(x) push_back(x)
#define wr cout<<"----------------"<<endl;
#define ppb() pop_back()
#define tr(ii,c) for(__typeof((c).begin()) ii=(c).begin();ii!=(c).end();ii++)
#define ff first
#define ss second
#define my_little_dodge 46
#define debug(x)  cerr<< #x <<" = "<< x<<endl;
using namespace std;

typedef long long ll;
typedef pair<int,int> PII;
template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
bool f(int x){
    int s = 0;
    while(x){
        s += x % 10;
        x /= 10;
    }
    return s == 10;
}
int main(){
	//~ freopen("file.in","r",stdin);
	int n, k;
	scanf("%d", &k);
	for(int i = 19; ; i ++){
        if(f(i))
            k --;
        if(!k)
            return printf("%d\n", i) * 0;
	}
	return 0;
}

