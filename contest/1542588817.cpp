#include<bits/stdc++.h>
using namespace std;
#define lli long long int
const lli mod=1e9+9;
const lli pINF=LLONG_MAX;
const lli nINF=-LLONG_MAX;
void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
lli power(lli a,lli b){lli ans=1;while(b!=0){ if(b%2==1){ans*=a;ans%=mod;}b/=2;a*=a;a%=mod;} return ans;}
lli invmod(lli a) {return pow(a,mod-2);}
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define mp make_pair
#define F first
const int INF=0x3f3f3f3f;
#define PII pair<int,int>
#define S second
#define si(n) scanf("%d",&n)
#define sli(n) scanf("%lld",&n)
#define printi(n) printf("%d\n",n)
#define printli(n) printf("%lld\n",n)
#define all(v) v.begin(),v.end()
#define forn(i,n) for(int i=0;i<n;i++)
#define ld long double
void print(int a[],int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";}
string a[105];

int main()
{
    string s;
    cin>>s;
    int n;
    si(n);

    for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<n;i++){
        if(a[i]==s){
            cout<<"YES\n";
            return 0;
        }
        if(a[i][1]==s[0]){
            for(int j=0;j<n;j++){
                if(a[j][0]==s[1]){
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
	}

	cout<<"NO\n";
	return 0;
}
