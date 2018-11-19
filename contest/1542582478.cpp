/* Don't let anyone discourage you */
#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define sz(x) (int)(x).size()
#define inp(x) scanf("%lld",&x)
#define out(x) printf("%lld\n",x)
#define all(x) (x).begin(),(x).end()
#define bits(x) __builtin_popcount(x)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=b-1;i>=a;i--)
const int maxN=(int)1e2+100;
const int mod=(int)1e9+7;
const int infs=(int)1e9+1000;
const long long int inf=1e17;
string s,s1[maxN];
int n;
int main()
{
    cin>>s;
    inp(n);
    for(int i=0;i<n;i++)    cin>>s1[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((s1[i][1]==s[0] && s1[i][0]==s[1]) || (s1[i][1]==s[0] && s1[j][0]==s[1]) || (s1[i][0]==s[0] && s1[i][1]==s[1])){
                return cout<<"YES"<<endl,0;
            }
        }
    }
    cout<<"NO"<<endl;
return 0;
}
