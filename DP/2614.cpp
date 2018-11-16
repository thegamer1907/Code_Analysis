#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define pf(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)

#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep2(i,n) for(int i=n-1;i>=0;i--)
#define rep3(i,n) for(int i=n;i>1;i--)

#define fi first
#define se second
#define pb(x) push_back(x)
#define po(x) pop_back(x)
#define id(x,y) make_pair(x,y)
#define sz(x) ((int) (x).size())
#define forech(a) a.begin(),a.end()
#define MAX 100007
using namespace std;

typedef long long int lli;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;

int main(){
    int a1,a2,t=0;
    sd2(a1,a2);
    while(a1>=0 and a2>=0){
        if(a1<a2)   swap(a1,a2);
        // cout << a1 << ' ' << a2 <<'\n';
        a1-=2;
        a2++;
        if(a1>=0)   t++;
        if(a1==0 || a2==0)break;
    }
    pf(t);
    return 0;
}