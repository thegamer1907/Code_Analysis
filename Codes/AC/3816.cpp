#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
#define dbg(x) cout << #x << '=' << x << '\n';
#define ll long long
#define pi pair<int,int>
#define pl pair<long long,long long>
#define lg length()
#define pb push_back
#define MAXN 100005
#define INF 1000000005
#define LINF 1000000000000000005

string s;

long long a,b,c,p,q,r,x,y,z,t,cnt,fk;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie();
    cin >> s >> p >> q >> r >> x >> y >> z >> t;
    for(int i=0;i<s.lg;i++){
        if(s[i]=='B') a++;
        else if(s[i]=='S') b++;
        else if(s[i]=='C') c++;
    }
    while((p && a) || (q && b) || (r && c)){
        if(p<a){
            t-=(a-p)*x;
            if(t<0){
                cout << cnt;
                return 0;
            }
            p=a;
        }
        if(q<b){
            t-=(b-q)*y;
            if(t<0){
                cout << cnt;
                return 0;
            }
            q=b;
        }
        if(r<c){
            t-=(c-r)*z;
            if(t<0){
                cout << cnt;
                return 0;
            }
            r=c;
        }
        p-=a; q-=b; r-=c;
        cnt++;
    }
    fk=a*x+b*y+c*z;
    cout << cnt+t/fk;
}
