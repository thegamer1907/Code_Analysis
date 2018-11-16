/*
ID: m.estek1
PROG: test
LANG: C++
*/

//In the name of Allah

#include <bits/stdc++.h>
using namespace std;
ofstream fout("test.out");
ifstream fin("test.in");
#define int long long
#define pb push_back
#define F first
#define S second

const int MX=2e5+100 ,INF=1e18,mod=1e9+7;
int  n,m,arr[MX],cnt,flg,ans,del=12641,c[5000][5000];
string s;
vector <int> v;
vector <pair<int,int> > vec[MX];
bool mark[MX];

int pn(int a,int b){
    if(b==0)return 1;
    int nsf=pn(a,b/2);
    nsf%=del;
    nsf*=nsf;
    nsf%=del;
    if(b&1)nsf*=a;
    return nsf%del;
}

bool palcheck(int a){
    for(int i=2; i<=sqrt(a) ; i++){
        if(a%i==0)return false;
    }
    return true;
}

int32_t main(){
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    /*
    for(int i=0 ; i<=4000 ; i++){
        c[i][0]=1;
    }
    for(int i=1 ; i<4000 ; i++){
        for(int j=1 ; j<=i ; j++){
            c[i][j]=((c[i-1][j]%del)+(c[i-1][j-1]%del))%del;
        }
    }*/
    cin>>n>>m;
    ans=n;
    for(int i=0  ;i<n ; i++){
        int a;
        cin>>a;
        if(a>m)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
