/*******************************\
   Name:    REAJUL HAQUE REAYZ  |
   School:  COMILLA UNIVERSITY  |
            CSE (5TH BATCH)     |
********************************/
#include<bits/stdc++.h>
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair < int , int > pii;
typedef pair < ll , ll > pll;
const ll MOD = 1000000007;
const int MAX = 100005;

vector<int>v;
    vector<int>x;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, a, b;
    cin>>n>>a>>b;
    int m=1;
    for(int i=0; ;i++){
        if(m==n) {
            m=i; break;
        }
        m*=2;
    }
    if(a>b) swap(a,b);
    for(int i=1; i<=n; i++)
        v.pb(i);
    for(int r=1; r<m; r++){
        for(int i=0; i<n; i+=2){
            if(v[i]==a and v[i+1]==b){
                cout<<r<<endl;
                return 0;
            }
            if(v[i]==a or v[i+1]==a){
                x.pb(a);
            }
            else if(v[i]==b or v[i+1]==b){
                x.pb(b);
            }
            else x.pb(v[i]);
        }
        v.clear();
        v = x;
        x.clear();
    }
    cout<<"Final!"<<endl;
	return 0;
}