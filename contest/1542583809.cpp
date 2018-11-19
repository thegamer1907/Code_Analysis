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
int h,m,s,t1,t2;
bool go_up(){
    if( (h>=t1&&h<t2)&&(m>=t1*5&&m<t2*5)&&(s>=t1*5&&s<t2*5) ) return true;
    return false;
}
bool go_dn(){
    if( (h<t1||h>=t2)&&(m<t1*5||m>=t2*5)&&(s<t1*5||s>=t2*5) ) return true;
    return false;
}
int32_t main(void){
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2) swap(t1,t2);
    cout << ((go_up()||go_dn())?"YES":"NO") << endl;
	return 0;
}
