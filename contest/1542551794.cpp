#include <bits/stdc++.h>
#define mem(a) memset(a,0,sizeof(a))
#define memm(a) memset(a,-1,sizeof(a))
#define F first
#define S second
#define R real
#define I imag
#define maxn 505
#define eps 1e-9
using namespace std;
typedef long long LL;
typedef pair <int,int> PP;
typedef complex <double> Point;
typedef Point V;
int n,k,s[1<<4];
vector <int> v0;
vector <int> v1;
vector <int> v2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n >> k){
        v0.clear();v1.clear();v2.clear();
        mem(s);
        for(int i=0;i<n;i++){
            int cnt0=0,res=0;
            for(int j=0,a,p=1;j<k;j++,p<<=1){
                cin >> a;
                if(a==0) cnt0++;
                res+=a*p;
            }
            s[res]++;
            if(cnt0==k) v0.push_back(res);
            else if(cnt0==k-1) v1.push_back(res);
            else if(cnt0>=(k+1)/2) v2.push_back(res);
        }
        if(v0.size()>0){
            cout << "YES" << endl;
            continue;
        }
        int ok=0;
        for(int u : v1){
            for(int p=0;p<(1<<k) && ok!=1;p++){
                if((p&u)==0 && s[p]){
                    ok=1;
                }
            }
            if(ok==1) break;
        }
        if(ok==1){
            cout << "YES" << endl;
            continue;
        }
        for(int u : v2){
            if(s[u^((1<<k)-1)]){
                ok=1;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
