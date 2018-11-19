#include <bits/stdc++.h>
#define all(t) (t).begin(),(t).end()
#define CLR(a) memset((a),0,sizeof(a))
#define pb push_back
#define pf push_front
#define mp(a,b) make_pair(a,b)
#define fr first
#define sc second
#define inf 2e9
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef pair<LL,LL> pLL;
typedef vector<pLL> vpLL;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vLL;
typedef vector<vLL> vvLL;
typedef map<int,int> mii;
typedef map<LL,LL> mLL;
typedef long double ld;

int M = 1e9+7;

int main(){
    //ios::sync_with_stdio(false);
//    freopen("xyz.txt", "r", stdin);
    int n,i,f1=0,f2=0,f3=0;
    string s;
    cin>>s;
    cin>>n;
    vector<string> vs(n);
    for(i=0;i<n;i++){
        cin>>vs[i];
        if(vs[i][1]==s[0]){
            f1=1;
        }
        if(vs[i][0]==s[1]){
            f2=1;
        }
        if(vs[i]==s){
            f3=1;
        }
    }
    if(f3==1 || f1*f2==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
















