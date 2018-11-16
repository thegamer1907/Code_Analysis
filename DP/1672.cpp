#include<bits/stdc++.h>
using namespace std;

#define sf(n) scanf("%d",&n)
#define pd(n)  printf("%.12lf",n)
#define pf(n)  printf("%d", n)
#define p() 	printf("\n")
#define ps() 	printf(" ")
#define ll long long
#define ull unsigned long long
#define MAX 1e9
#define mod 1000000000
#define pi 3.1415926536
#define ex 1e12
#define dbl 1e09
#define  qu(q)    queue<int>q
#define pqu(q)    priority_queue<int>q
#define len(s)   s.length()
#define sz(x)    x.size()
#define pb(x)    push_back(x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

vector<int>a,b;
int main() {

    //freopen("input.txt","r",stdin);
    //freopen("output.tx(t","w",stdout);
    string s;
    cin>>s;
    if(s.find("AB")==-1 or s.find("BA")==-1){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<len(s);++i){
        if(s[i]=='A' and s[i+1]=='B')
            a.pb(i);
        if(s[i]=='B' and s[i+1]=='A')
            b.pb(i);
    }
    for(int i=0;i<sz(a);++i){
        for(int j=0;j<sz(b);++j){
            if(abs(a[i]-b[j])>1){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}