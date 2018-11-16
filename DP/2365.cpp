#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define ft first
#define sd second
#define pb push_back
#define mp make_pair
#define rep(i,n) for(i=0;i<n;i++)
#define pr pair<int,int>
#define pll pair<long long,long long>
#define ll long long
#define v vector
#define all(a) a.begin(),a.end()
#define ina(a,i,n) for(i=0;i<n;i++)cin>>a[i]
#define mmst(a) memset(a,0,sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);   
    #endif
    ios_base::sync_with_stdio(false);
    int i,j,k,n,m,t;
    string s;
    cin>>s;
    n = s.length();
    int x,y,z;
    for(i=0;i<n;i++){
        x = s[i] - '0';
        if(x%8==0) {
            cout<<"YES"<<endl;
            cout<<x;
            return 0;
        }
        for(j=i+1;j<n;j++) {
            y = x*10 + s[j] - '0';
            if(y%8==0) {
                cout<<"YES"<<endl;
                cout<<y;
                return 0;
            }
            for(k=j+1;k<n;k++) {
                z = y*10 + s[k] - '0';
                if(z%8==0) {
                    cout<<"YES"<<endl;
                    cout<<z;
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}