#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define pf printf
#define sf scanf
#define mem(n,i) memset((n),i,sizeof (n))
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<vector<ll> > vvll;
typedef vector<vector<pll> > vvp;
typedef map<int,int> mi;
typedef map<ll,ll> mll;
typedef map< string , ll> ms;
typedef queue<ll> qll;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    string w;
    cin>>w;
    int n;
    cin>>n;
    string temp ="";
    bool flag1=0,flag2=0;

    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        if(x==w)
            flag1=1,flag2=1;
        if(x[0]==w[1])
            flag1=true;
        if(x[1]==w[0])
            flag2 = true;
    }
    if(flag1&&flag2){
        puts("YES");
    }
    else{
        puts("NO");
    }

#ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
}
