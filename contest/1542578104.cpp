#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <iostream>
using namespace std;

#define ll long long
#define PQ priority_queue
#define fr(x) freopen(x,"r",stdin)
#define fw(x) freopen(x,"w",stdout)
#define cls(ar,val) memset ( ar, val, sizeof ( ar ) )
#define debug(a) cerr<<#a<<"=="<<a<<endl
#define lp(loop,start,end) for ( int loop = start; loop < end; ++loop )
#define lpd(loop,start,end) for ( int loop = start; loop > end; --loop )
#define lpi(loop,start,end) for ( int loop = start; loop <= end; ++loop )
#define lpdi(loop,start,end) for ( int loop = start; loop >= end; --loop )
const int inf = 0x3fffffff;
const int SINF = 0x7fffffff;
const long long LINF = 0x3fffffffffffffff;
const long long SLINF = 0x7fffffffffffffff;
const int maxn=100;
template<typename T> inline void read(T &x){
    x=0;T f=1;char ch;do{ch=getchar();if(ch=='-')f=-1;}while(ch<'0'||ch>'9');do x=x*10+ch-'0',ch=getchar();while(ch<='9'&&ch>='0');x*=f;
}

template<typename A,typename B> inline void read(A&x,B&y){read(x);read(y);}
template<typename A,typename B,typename C> inline void read(A&x,B&y,C&z){read(x);read(y);read(z);}
template<typename A,typename B,typename C,typename D> inline void read(A&x,B&y,C&z,D&w){read(x);read(y);read(z);read(w);}

int h,m,s,tttt,t2;
bool flag [100300];
void fun() {
    flag[(s*720)%43200]=true;
    flag[(m*720+s*12)%43200]=true;
    flag[(h*3600+m*60+s)%43200]=true;
    tttt = (tttt*3600)%43200;
    t2 =(t2*3600)%43200;
}
int main(){
    cin>>h>>m>>s>>tttt>>t2;
    fun();
    int temp = tttt;
    bool flag2 = true;
    while (temp!=t2){
        temp++;
        temp%=43200;
        if (temp==t2)break;
        if (flag[temp]){
            flag2 = false;
            break;
        }
    }
    if (flag2){
        cout<<"YES"<<endl;
        return 0;
    }
    flag2 = true;
    temp =tttt;
    while (temp!=t2){
        temp+=43199;
        temp%=43200;
        if (temp==t2)break;
        if (flag[temp]){
            flag2 = false;
            break;
        }
    }
    if (flag2){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}