//In the name of God B-)	:Alikhm
#include <bits/stdc++.h>
#define pb push_back
#define po pop_back
#define ins insert
#define co continue
#define db(a,b,c,d)	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define int long long
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
const LL MAXN=5e3+1,INF=1e9,MOD=998244353,MODH=999998727899999ll;

int n,k,m[4];
set <int> s;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin>>n>>k;
	for(int i=0;i<n;++i){
        int t=0;
        for(int j=0;j<k;++j){
            int a;
            cin>>a;
            if(a==1){
                t+=(1<<j);
            }else{
                m[j]=1;
            }
        }
        s.ins(t);
	}
	for(int i=0;i<k;++i){
        if(m[i]==0){
            cout<<"NO\n";
            return 0;
        }
	}
	if(s.count(0)){
        cout<<"YES\n";
        return 0;
	}
	for(int i=0;i<k;++i){
        int t=(1<<i);
        if(s.count(t)){
            cout<<"YES\n";
            return 0;
        }
	}
	for(int i=0;i<k;++i){
        for(int j=i+1;j<k;++j){
            int t=(1<<i)+(1<<j),p=(1<<k)-1-t;
            //cout<<t<<" "<<p<<endl;
            if(s.count(t)&&s.count(p)){
                cout<<"YES\n";
                return 0;
            }
        }
	}
	cout<<"NO\n";
	return 0;
}
