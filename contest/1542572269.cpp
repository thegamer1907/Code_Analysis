#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
#define fast_io ios_base::sync_with_stdio(0);
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
ll MOD=1e9+7;
ll MAX=1e17;

int main(){
    fast_io;
    double h,s,m,t1,t2;
    cin>>h>>s>>m>>t1>>t2;
    double f[3];
    f[0]=h+0.001;
    f[1]=m/5+0.01;
    f[2]=s/5+0.01;
    sort(f,f+3);
    if(t1>=f[0] and t1<=f[1] and t2<=f[1] and t2>=f[0]) {pret("YES");}
    else if(t1>=f[1] and t1<=f[2] and t2<=f[2] and t2>=f[1]) {pret("YES");}
    else if(((t1>=f[2] and t1<=12+f[0]) or (12+t1>=f[2] and t1<=f[0])) and ((t2<=12+f[0] and t2>=f[2]) or (t2+12>=f[2] and t2<=f[0]))) {pret("YES");}
    pret("NO");
    return 0;
}