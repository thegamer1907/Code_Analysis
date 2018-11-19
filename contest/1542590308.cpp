#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0), cin.tie(0)
#define RI(x) x = rit()
#define RII(a,b) a = rit(), b = rit()
#define RIII(a,b,c) a = rit(), b = rit(), c = rit()
#define REP(I, N) for(int I=0;I<(N);I++)
#define REPP(I, N) for(int I=1;I<=(N);I++)
#define SZ(x) (int)(x).size()
#define P pair<int, int>
#define F first
#define S second
#define PB(x) push_back(x)
#define endl "\n"
#define ll long long
//#define int long long

//===================================================//

#define N 100000
#define modn 1000000007

using namespace std;
inline int rit(){
    int f=0,key=1;
    char ch;
    do{
        ch = getchar();
        if(ch=='-') key=-1;
    }while(ch<'0'||ch>'9');
    do{
        f = f*10+ch-'0';
        ch = getchar();
    }while(ch>='0'&&ch<='9');
    return f*key;
}
string ps, sv[105];
int n;
bool yes;
int32_t main(void){
    cin>>ps>>n;
    REP(i,n){
        cin>>sv[i];
        if(sv[i]==ps){
            yes = true;
        }
    }
    if(yes){
        cout << "YES\n";
    } else {
        REP(i,n){
            REP(j,n){
                if( sv[i][0]==ps[1]&&sv[j][1]==ps[0] ){
                    yes = true;
                }
            }
        }
        if(yes) cout << "YES\n";
        else cout << "NO\n";
    }
	return 0;
}
