#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define preturn(X) cout<<X<<endl; return 0
typedef long long ll;
const ll MOD = 1e9+7;
//cout.setf(ios::fixed); cout.precision(18)



int main(){
    cin.tie(0);ios_base::sync_with_stdio(0);
    double h,s,m,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h = h + (double(60)*m+s)/double(3600);
    m = (m + (s/60))/double(5);
    s = s/5;
    if(t1>t2){
        swap(t1,t2);
    }
    int c= 0;
    if(h>t1 && h<t2){
        c++;
    }
    if(m>t1 && m<t2){
        c++;
    }
    if(s>t1 && s<t2){
        c++;
    }
    if(c==0 || c==3){
        preturn("YES");
    }
    preturn("NO");
}